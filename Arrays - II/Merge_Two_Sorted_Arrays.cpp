#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rearrange(vector<int>& arr) {
        
        int i = 0, firstElement = arr[0];
        
        for(i = 1; i<arr.size() && arr[i] < firstElement; i++) {
            arr[i-1] = arr[i];
        }
        
        arr[i-1] = firstElement;
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        if(n == 0) {
            return ;
        }else if(m == 0) {
            for(int i = 0; i<n; i++) {
                nums1[i] = nums2[i];
            }
            return ;
        }

        for(int i = 0; i<m; i++) {
            if(nums1[i] > nums2[0]) {
                swap(nums1[i], nums2[0]);
                rearrange(nums2);       //rearrange the second array to keep it sorted
            }
        }
        
        for(int i = m; i<m+n; i++) {
            nums1[i] = nums2[i-m];
        }
    }
};