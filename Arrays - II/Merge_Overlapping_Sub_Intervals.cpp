#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        for (int i = 0; i < intervals.size(); i++) {
            int start = intervals[i][0], end = intervals[i][1];

            if (!ans.empty()) {
                if (start <= ans.back()[1]) {
                    continue;
                }
            }

            for (int j = i + 1; j < intervals.size(); j++) {
                if (intervals[j][0] <= end) {
                    end = max(end, intervals[j][1]);
                }
            }
        
            end = max(end, intervals[i][0]);

            ans.push_back({start, end});
        }
    
        return ans;
    }
};