class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> n;
        for(int i =0;i<nums.size();i++){

            int diff =target-nums[i];
            if(n.count(diff)&&n[diff]!=i)return {n[diff],i};
            n[nums[i]]=i;        }
        return {};
    }
};
