#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) return 0;

    int j = 1;  // index for unique elements

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Print unique elements
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
