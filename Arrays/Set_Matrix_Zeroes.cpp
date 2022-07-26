#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
            
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        //This will tell us if the (i,0) cell was zero at the beginning or got changed to zero later 
        //when we encountered any other zeros in the zeroth row.
        int colZeroFlag = 1;
        
        for(int i = 0; i<rows; i++) {

            if(matrix[i][0] == 0) colZeroFlag = 0;
            
            for(int j = 1; j<cols; j++) {
            
                if(matrix[i][j] == 0) {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            
            }
        }
        
        for (int i = rows - 1; i >= 0; i--) {
            
            for (int j = cols - 1; j >= 1; j--) {
        
               if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                   matrix[i][j] = 0;
               }
        
            }
            
            if (colZeroFlag == 0) {
                matrix[i][0] = 0;
            }
            
        }
    }
};