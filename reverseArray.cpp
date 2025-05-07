#include<iostream>
#include<algorithm>
using namespace std;

void revArr(int a[], int n){
    int p1=0;
    int p2=n-1;
    while(p1<p2){
        swap(a[p1], a[p2]);
        p1++;
        p2--;
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    revArr(a, n);
}