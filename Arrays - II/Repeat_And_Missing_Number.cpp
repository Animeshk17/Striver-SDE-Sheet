#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n) {

    pair<int,int> ans;
    
	for (int i = 0; i < n; i++) {
        if (arr[abs(arr[i]) - 1] > 0) {
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }else{
            ans.second = abs(arr[i]);
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            ans.first = i+1;
            break;
        }
    }
    
    return ans;
}
