/*Problem:
 Given an array of integers, count the frequency of each distinct element and print the result.*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void countFrequency(vector<int>& arr) {
    unordered_map<int,int> frequencyMap;
    for (int num : arr){
        frequencyMap[num]++;
    }
    cout<<"Element\tFrequency"<<endl;
    for (auto& pair : frequencyMap){
        cout<<pair.first<<"\t"<<pair.second<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array :"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array :"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    countFrequency(arr);
    return 0;
}