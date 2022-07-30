#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        
        //dp[i] stores maxmSumSubarray ending at index i
        int* dp = new int[n];
        dp[0] = nums[0];
        
        for(int i = 1; i<n; i++) {
            dp[i] = max(nums[i], dp[i-1] + nums[i]);
        }
        
        return *max_element(dp,dp+n);
    }

    int maxSumSubArray(vector<int>& arr) {

        int maxEndingAtPrevIndex = arr[0];
        int maxSumSubArraySoFar = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {

            int maxEndingAtCurrIndex = max(arr[i], maxEndingAtPrevIndex + arr[i]);
        
            maxSumSubArraySoFar = max(maxSumSubArraySoFar, maxEndingAtCurrIndex);
        
            maxEndingAtPrevIndex = maxEndingAtCurrIndex;
        
        }
        
        return maxSumSubArraySoFar;
    }
};