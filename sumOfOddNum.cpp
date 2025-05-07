//sum of odd numbers in a given range...
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            sum+=i;
        }
    }
    cout << "sum of odd numbers from 1 to " << n << " is : " << sum;
    return 0;
}