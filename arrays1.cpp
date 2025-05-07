#include<iostream>
#include<climits>
using namespace std;

int mineleArr(int a[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << mineleArr(a, n);
}