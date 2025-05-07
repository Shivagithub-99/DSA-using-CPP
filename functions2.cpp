#include<iostream>
using namespace std;

int sumOfNums(int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int range;
    cin >> range;
    cout << sumOfNums(range) << endl;
}