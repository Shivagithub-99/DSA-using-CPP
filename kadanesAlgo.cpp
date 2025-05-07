#include<iostream>
using namespace std;

int kadanesMSS(int a[], int n){
    int maxsum=0;
    int currsum=0;
    for(int i=0; i<n; i++){
        currsum+=a[i];
        maxsum=max(currsum, maxsum);
        if(currsum < 0){
            currsum=0;
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
    cout << kadanesMSS(a, n);
    return 0;
}