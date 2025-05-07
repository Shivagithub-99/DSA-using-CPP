#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int mooreVoting(vector<int>nums, int n){
    sort(nums.begin(), nums.end());
    int freq=1;
    int ans=nums[0];
    for(int i=0; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
    }
}