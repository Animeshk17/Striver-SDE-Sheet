#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& a) {

        int n = a.size();
        int x = -1;                     //deflection point
        
        for(int i=n-2; i>=0; i--){

            if(a[i] < a[i+1]) {
                x = i;
                break;
            }
        
        }
        
        if(x==-1){
        
            sort(a.begin(),a.end());
            return;
        
        }else{
        
            sort(a.begin()+x+1,a.end());
            
            for(int i=x+1; i<n; i++){
            
                if(a[i]>a[x]){
                    swap(a[i],a[x]);
                    break;
                }
            
            }
        
        }
    }
};