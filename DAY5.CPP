/*Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)*/

#include <iostream>
using namespace std;

int main() {
    int p, q;
    cin >> p;

    int log1[p];
    for(int i = 0; i < p; i++) {
        cin >> log1[i];
    }

    cin >> q;
    int log2[q];
    for(int i = 0; i < q; i++) {
        cin >> log2[i];
    }

    int i = 0, j = 0;
    while(i < p && j < q) {
        if(log1[i] <= log2[j]) {
            cout << log1[i++] << " ";
        } else {
            cout << log2[j++] << " ";
        }
    }

    while(i < p) {
        cout << log1[i++] << " ";
    }

    while(j < q) {
        cout << log2[j++] << " ";
    }

    return 0;
}
