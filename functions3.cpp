#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n; //we can take same variable as in function or we can change also...
    cin >> n;
    cout << factorial(n) << endl;
}