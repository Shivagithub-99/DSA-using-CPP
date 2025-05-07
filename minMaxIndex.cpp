#include<iostream>
#include<climits>
using namespace std;

int mineleInd(int a[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=i;
        }
    }
    return min;
}

int maxeleInd(int a[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=i;
        }
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << mineleInd(a, n) << endl;
    cout << maxeleInd(a, n) << endl;
    return 0;
}