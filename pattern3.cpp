// 123
// 456
// 789

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=1;
    for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){
            cout << count << " ";
            count+=1;
        }
        cout << endl;
    }
    return 0;
}