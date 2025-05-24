#include<iostream>
using namespace std;

int maxRowSum(int mat[][3], int rows, int cols){
    int maxSum=0;
    for(int i=0; i<rows; i++){
        int rowSum=0;
        for(int j=0; j<cols; j++){
            rowSum+=mat[i][j];
        }
        if(rowSum > maxSum){
            maxSum=rowSum;
        }
    }
    return maxSum;
}

int main(){
    int mat[3][3]={{1, 3, 5},{5, 3, 5},{6, 7, 5}};
    int rows=3;
    int cols=3;
    maxRowSum(mat, rows, cols);
}