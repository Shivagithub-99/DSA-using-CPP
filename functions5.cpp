#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    return a/(b*c);
}

int main(){
    int n,r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
}