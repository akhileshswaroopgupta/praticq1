#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    //O(N) time O(N) space
    vector<int> productExceptSelf(vector<int>& nums) {
        //as div ops not to be used, we need to use prefix suffix concept
        int N = nums.size();
        
        vector<int> pre(N,1);
        vector<int> suf(N,1);
        vector<int> ans(N,1);
        
        pre[0] = nums[0];
        for(int i=1; i<N; i++){
            pre[i] = pre[i-1]*nums[i]; 
        }
        
        suf[N-1] = nums[N-1];
        for(int i=N-2; i>=0; i--){
            suf[i] = suf[i+1]*nums[i];
        }
        
        for(int i=0; i<N; i++){
            if(i==0)
                ans[i] = suf[i+1];
            else if(i==N-1)
                ans[i] = pre[i-1];
            else
                ans[i] = pre[i-1]*suf[i+1];
            
        }
        
        return ans;
        
    }
};