class Solution {
public:
vector<int> dp;
int dfs(int n,int i){
    if(i>=n) return i==n;
    else return dfs(n,i+1)+dfs(n,i+2);
}
int climbStairs(int n){
    dp.resize(n);
    return dfs(n,0);
}
};
