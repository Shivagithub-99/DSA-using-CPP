#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        for(int j=i+1; j>=1; j--){
            cout << j;
        }

        if(i != 0){
            for(int j=1; j<=i; j++){
                cout << j+1;
            }
        }

        cout << endl;
        
    }
    return 0;
}