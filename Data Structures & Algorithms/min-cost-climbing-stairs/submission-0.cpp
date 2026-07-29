class Solution {
public:
    vector<int>dp;
    int dfs(int n,int i,vector<int>& cost){
        if(i>=n) return 0;
        if(dp[i]!=-1) return cost[i]+dp[i];
        return cost[i]+min(dfs(n,i+1,cost),dfs(n,i+2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        dp.resize(cost.size(),-1);
        return min(dfs(cost.size(),0,cost),dfs(cost.size(),1,cost));         
    }
};
