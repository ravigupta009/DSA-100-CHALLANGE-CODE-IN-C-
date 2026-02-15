/*Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.*/
#include<iostream>
#include<vector>
using namespace std;
bool isIdentityMatrix(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j && matrix[i][j]!=1){
                return false;
            }
            else if (i!=j && matrix[i][j]!=0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the size of the square matrix :"<<endl;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    cout<<"Enter the elements of the matrix :"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    if (isIdentityMatrix(matrix)){
        cout<<"The given matrix is an Identity Matrix.";
    }
    else{
        cout<<"The given matrix is not an Identity Matrix.";
    }
    return 0;
}