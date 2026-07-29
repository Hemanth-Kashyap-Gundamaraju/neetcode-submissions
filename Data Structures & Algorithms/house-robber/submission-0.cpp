class Solution {
public:
    vector<int> dp;
        int dfs(int n,int i,vector<int>& nums){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+dfs(n,i+2,nums),dfs(n,i+1,nums));
    }
    int rob(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return dfs(nums.size(),0,nums);
    }
};
