/*Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    int top=0, bottom=matrix.size()-1, left=0, right=matrix[0].size()-1;
    while (top<=bottom && left<=right){
        for (int i=left;i<=right;i++){
            result.push_back(matrix[top][i]);
        }
        top++;
        for (int i=top;i<=bottom;i++){
            result.push_back(matrix[i][right]);
        }
        right--;
        if (top<=bottom){
            for (int i=right;i>=left;i--){
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left<=right){
            for (int i=bottom;i>=top;i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
}
int main(){
    int m,n;
    cout<<"Enter the number of rows and columns :"<<endl;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    cout<<"Enter the elements of the matrix :"<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    vector<int> result=spiralOrder(matrix);
    cout<<"Spiral order of the matrix is : ";
    for (int num:result){
        cout<<num<<" ";
    }
    return 0;
}