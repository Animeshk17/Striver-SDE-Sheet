#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;
        ans.push_back({1});
        
        for(int i = 1; i<numRows; i++) {
            
            vector<int> prevRow = ans[i-1];
            vector<int> curr;
            
            for(int i = 0; i<=prevRow.size(); i++) {
                
                if(i == 0) {
                    curr.push_back(1);
                } else if(i == prevRow.size()) {
                    curr.push_back(1);
                }else{
                    curr.push_back(prevRow[i-1] + prevRow[i]);
                }
                
            }

            ans.push_back(curr);
        }
        
        return ans;
    }
};