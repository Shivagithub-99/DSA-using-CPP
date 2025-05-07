#include<iostream>
#include<climits>
using namespace std;

int mineleInd(int a[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];

        }
    }
    for(int i=0; i<n; i++){
        if(a[i] == min){
            return i;
        }
    }
}

int maxeleInd(int a[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] == max){
            return i;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int minNum = mineleInd(a, n);
    int maxNum = maxeleInd(a, n);
    swap(a[minNum], a[maxNum]);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}