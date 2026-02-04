#include <iostream>
using namespace std;

int main() {
    int n, pos;

    
    cin >> n;

    int arr[n];

   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cin >> pos;

    
    if (pos < 1 || pos > n) {
        cout << "Invalid position";
        return 0;
    }

    
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
