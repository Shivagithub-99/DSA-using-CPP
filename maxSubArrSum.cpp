#include<iostream>
using namespace std;

int maxSubArrSum(int a[], int n){
    int maxsum=0;
    for(int i=0; i<n; i++){
        int currsum=0;
        for(int j=i; j<n; j++){
            currsum+=a[j];
            maxsum=max(maxsum,currsum);
        }
    }
    return maxsum;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << maxSubArrSum(a, n);
    return 0;
}