#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a  Fibonacci  number :"<<endl;
    cin>>n;
    int a=0,b=1,c;
    if (n==0){
        cout<<a;
    }
    else if (n==1){
        cout<<b;
    }
    else{
        for (int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }

    return 0;
}