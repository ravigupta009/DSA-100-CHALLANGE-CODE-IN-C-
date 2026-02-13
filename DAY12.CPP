/* Problem: Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal
 to element at position [j][i] for all valid i and j).*/

 #include<iostream>
 using namespace std;
 
 int main(){
    int n;
    cin>>n;
    int matrix[10][10];
    cout<<"Enter elements of the matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    int symmetric = 1; // Assume the matrix is symmetric until proven otherwise
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] != matrix[j][i]){
                symmetric = 0; // Matrix is not symmetric
                break;
            }
        }
        if(symmetric == 0){
            break;
        }
    }
    if(symmetric == 1){
        cout<<"The matrix is symmetric."<<endl;
    } else {
        cout<<"The matrix is not symmetric."<<endl;
    }
    
    return 0;
 }