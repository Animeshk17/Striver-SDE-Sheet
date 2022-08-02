#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> bucket(n+1, 0);
        
        for(int num : nums) {
            
            if(bucket[num]) {
                return num;
            }
            
            bucket[num]++;
        
        }
        
        return n;
    }
};