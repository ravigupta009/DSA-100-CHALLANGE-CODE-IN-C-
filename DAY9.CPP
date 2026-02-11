/*Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
*/
#include<iostream>
#include<string>
using namespace std;
string mirrorFormat(string codeName){
    string mirrorCode="";
    for (int i=codeName.length()-1;i>=0;i--){
        mirrorCode+=codeName[i];
    }
    return mirrorCode;
}
int main(){
    string codeName;
    cout<<"Enter the code name :"<<endl;
    cin>>codeName;
    cout<<"Mirror format of the code name is : "<<mirrorFormat(codeName);
    return 0;
}
