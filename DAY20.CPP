/* Given an array of integers, count the number of subarrays whose sum is equal to zero.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int countZeroSumSubarrays(int arr[], int n) {
    unordered_map<int, int> freq;
    
    int sum = 0;
    int count = 0;
    
    freq[0] = 1;   // Important initialization
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        if(freq.find(sum) != freq.end()) {
            count += freq[sum];
        }
        
        freq[sum]++;
    }
    
    return count;
}

int main() {
    int arr[] = {1, -1, 2, -2, 3, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << countZeroSumSubarrays(arr, n);
    return 0;
}