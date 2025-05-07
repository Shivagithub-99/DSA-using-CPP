#include <iostream>
using namespace std;

int minOfTwoNum(int a, int b){
    if(a<b){
        return a;
    }
    else if(a==b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << "minimum num is : " << minOfTwoNum(num1, num2) << endl;
}