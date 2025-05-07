#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sum=0;
    while(num>0){
        int digit =  num % 10;
        num = num / 10; 
        sum += digit;   
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
}