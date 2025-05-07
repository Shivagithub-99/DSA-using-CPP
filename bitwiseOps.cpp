#include<iostream>
using namespace std;

int bitwiseOps(int a, int b){
    cout <<  ( a & b ) << endl;
    cout <<  ( a | b ) << endl;
    cout <<  ( a ^ b ) << endl;
    cout <<  ( a << b ) << endl;
    cout <<  ( a >> b ) << endl;
}

int main(){
    int a,b;
    cin >> a >> b;
    bitwiseOps(a, b);
}