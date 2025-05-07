//program to check given num is prime or  not...
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=0;
    for(int i=2; i<=n-1; i++){
        if(n%i == 0){
            count++;
            break;//we know the no is not prime so no use to check further stop the process.
        }
    }
    if(count==0){
        cout << n << " is prime no";
    }
    else{
        cout << n << " is not a prime no";
    }
    return 0;
}