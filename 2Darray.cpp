#include<iostream>
#include<utility>
using namespace std;
int main(){
    int matrix[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key=8;
    bool found=false;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j]==key){
                pair<int, int> result = {i, j};
                cout << result.first << " " << result.second;
                found=true;
                break;
            }
        }
        if(found) break;
    }
    if(!found){
        pair<int, int>result = {-1, -1};
        cout << result.first << " " << result.second;
    }
}