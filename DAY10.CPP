/*Problem: Read a string and check if it is a palindrome using two-pointer comparison.*/
#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str){
    int left=0;
    int right=str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter a string :"<<endl;
    cin>>str;
    if(isPalindrome(str)){
        cout<<"The string is a palindrome."<<endl;
    }else{
        cout<<"The string is not a palindrome."<<endl;
    }
    return 0;
}