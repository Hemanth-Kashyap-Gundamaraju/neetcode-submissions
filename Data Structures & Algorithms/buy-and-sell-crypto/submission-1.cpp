class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0, n = prices.size();
        int maxprofit= 0 , minprice =prices[0] , res = 0;
        for (int i = 0; i< n ; i++){
            if (minprice>prices[i]) {
                l=i;
                minprice=prices[i];
            }
            r = i;
            maxprofit=max(prices[r]-prices[l],maxprofit);
        }
        return maxprofit;
    }
};
