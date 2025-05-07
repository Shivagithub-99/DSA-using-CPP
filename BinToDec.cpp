#include<iostream>
using namespace std;

int DecToBin(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%10;
        ans+=(pow*rem);
        n/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << DecToBin(n);
}