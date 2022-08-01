#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMaxProfit(vector<int>& prices) {
        
        int minmPriceBeforeToday = prices[0];
        int maxProfit = 0;
        
        for(int i = 1; i<prices.size(); i++) {
            
            int stockPriceToday = prices[i];
            int profitIfSoldToday = stockPriceToday - minmPriceBeforeToday;
            
            maxProfit = max(profitIfSoldToday, maxProfit);
            minmPriceBeforeToday = min(prices[i], minmPriceBeforeToday);
            
        }
        
        return maxProfit;
    }
};