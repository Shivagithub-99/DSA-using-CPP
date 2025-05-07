//sum of numbers which are divisible by 3 from 1 to n...
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout << "sum of numbers which are divisible by 3 from 1 to " << n << " is " << sum;
    return 0;
}