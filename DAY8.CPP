/*Problem: Given integers a and b, compute a^b using recursion without using pow() function.

Input:
- Two space-separated integers a and b
8
*/
#include<iostream>
using namespace std;
int power(int a, int b){
    if (b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main(){
    int a,b;
    cout<<"Enter two integers a and b :"<<endl;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}
