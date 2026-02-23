/* Given an array of integers, find two elements whose sum is closest to zero.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
pair<int, int> findClosestToZero(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    pair<int, int> closestPair;
    int closestSum = INT_MAX;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (abs(sum) < abs(closestSum)) {
            closestSum = sum;
            closestPair = {arr[left], arr[right]};
        }
        if (sum < 0) {
            left++;
        } else {
            right--;
        }
    }
    return closestPair;
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
    
    pair<int, int> result = findClosestToZero(arr);
    
    cout << "Two elements whose sum is closest to zero: " << result.first << " and " << result.second << endl;
    
    return 0;
}

