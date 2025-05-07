#include<iostream>
#include<vector>
using namespace std;

vector<int>nums(vector<int>a, int n, int target){
    vector<int>ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<int>ans = nums(arr, n, target);
    cout << ans[0] << "," << ans[1];
    return 0;
}