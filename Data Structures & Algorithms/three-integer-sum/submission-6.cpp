class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res ;
        sort(nums.begin(),nums.end());
        if (nums.size()<3 )return res;
        for (int i =0;i<nums.size()-1;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j=i+1,k=nums.size()-1; j < k ;){
                if (nums[j]+nums[k]> - nums[i]) k--;
                else if (nums[j]+nums[k]< - nums[i]) j++;
                else {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                    
                }
            }

        }
        return res;
    }
};
