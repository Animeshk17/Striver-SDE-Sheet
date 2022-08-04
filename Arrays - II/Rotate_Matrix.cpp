#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    
    void transpose(vector<vector<int>>& a, int row, int col) {

        for(int i = 0; i<row; i++) {

            for(int j = i; j < row; j++) {

                swap(a[i][j], a[j][i]);

            }
        }

    }
    
    void rotate(vector<vector<int>>& matrix) {

        transpose(matrix, matrix.size(), matrix[0].size());

        for(int i = 0; i<matrix.size(); i++) {

            reverse(matrix[i].begin(), matrix[i].end());

        }

    }

};