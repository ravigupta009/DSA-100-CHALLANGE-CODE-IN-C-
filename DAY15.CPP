/*Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.
*/

#include<iostream>
#include<vector>
using namespace std;
int sumPrimaryDiagonal(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=matrix[i][i];
    }
    return sum;
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
    int result=sumPrimaryDiagonal(matrix);
    cout<<"The sum of the primary diagonal elements is : "<<result;
    return 0;
}