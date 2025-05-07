#include<iostream>
using namespace std;

void primeOrNot(int n){
    int count=0;
    for(int i=2; i<n-1; i++){
        if(n%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout << "prime no" << endl;
    }
    else{
        cout << "not prime no" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    primeOrNot(n);
}