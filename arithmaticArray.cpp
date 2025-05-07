#include<iostream>
using namespace std;

int sumArray(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    return sum;
}

int prodArray(int a[], int n){
    int prod=1;
    for(int i=0; i<n; i++){
        prod*=a[i];
    }
    return prod;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << sumArray(a, n) << endl;
    cout << prodArray(a, n) << endl;
    return 0;
}