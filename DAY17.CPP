/*Problem: Write a program to find the maximum and minimum values present in a given array of integers.
*/
#include<iostream>
#include<vector>
using namespace std;
void findMaxMin(vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty." << endl;
        return;
    }
    int maxVal = arr[0];
    int minVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
        if (num < minVal) {
            minVal = num;
        }
    }
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findMaxMin(arr);
    return 0;
}