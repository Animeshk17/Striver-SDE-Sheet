#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int zeroes = 0 , ones = 0, twos = 0;
        
        for(int &element : nums) {
            if(element == 0) zeroes++;
            else if(element == 1) ones++;
            else twos++;
        }
        
        int i = 0; 

        while(i < n) {
        
            while(zeroes > 0) {
                nums[i] = 0;
                zeroes--;
                i++;
            }
        
            while(ones > 0) {
                nums[i] = 1;
                ones--;
                i++;
            }
        
            while(twos > 0) {
                nums[i] = 2;
                twos--;
                i++;
            }
        }
    }
};