#include<iostream>
#include<vector>
using namespace std;

int majorityEle(vector<int>nums, int n){
    for(int i=0; i<n; i++){
        int freq=0;
        for(int j=0; j<n; j++){
            if(nums[i] == nums[j]){
                freq++;
            }
        }
        if(freq > n/2){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << majorityEle(a, n);
    return 0;
}