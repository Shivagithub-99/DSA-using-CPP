#include<iostream>
using namespace std;

int DecToBin(int n){
    int sum=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        n/=2;
        sum+=(pow*rem);
        pow*=10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << DecToBin(n);
}