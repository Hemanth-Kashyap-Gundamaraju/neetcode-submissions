class Solution {
public:
    int maxProfit(vector<int>& prices) {
        set<int> s;
        int l=0,r=0,res=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            l=prices[i];
            for(int j=i+1;j<n;j++){
                r=prices[j];
                // if()
                res=max(res,r-l);
            }
        }
        return res;
    }
};
