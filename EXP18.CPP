/* Given an array of integers, rotate the array to the right by k positions.
*/

#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k is greater than n
    vector<int> rotated(n);
    
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    
    arr = rotated; // Update the original array with the rotated values
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: " << endl;
    cin >> k;
    
    rotateArray(arr, k);
    
    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}