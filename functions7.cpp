#include<iostream>
using namespace std;

int isPrime(int n){

    if(n < 2){
        return false;
    }

    for(int i=2; i<n-1; i++){
        if(n%i == 0){
            return false;
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    return 0;
}