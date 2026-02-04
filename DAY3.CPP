#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int comparisons = 0;
    int position = -1;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            position = i; 
            break;
        }
    }

    if (position != -1) {
        cout << "Key found at position " << position + 1 << endl;
    } else {
        cout << "Key not found" << endl;
    }

    cout << "Number of comparisons: " << comparisons << endl;

    return 0;
}
