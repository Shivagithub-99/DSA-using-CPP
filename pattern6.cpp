#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << count << " ";
        }
        count++;
        cout << endl;
    }
    return 0;
}

//Another approach without count...

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << (i+1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }