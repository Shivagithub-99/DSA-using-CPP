#include<iostream>
#include<vector>
using namespace std;

vector<int>twosum2(vector<int>nums, int n, int target){
    vector<int>ans;
    int p1=0;
    int p2=n-1;
    while(p1 < p2){
        if(nums[p1] + nums[p2] > target){
            p2--;
        }
        else if(nums[p1] + nums[p2] < target){
            p1++;
        }
        else{
            ans.push_back(p1);
            ans.push_back(p2);
            return ans;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector<int>ans = twosum2(nums, n, target);
    cout << ans[0] << ", " << ans[1];
    return 0;
}

