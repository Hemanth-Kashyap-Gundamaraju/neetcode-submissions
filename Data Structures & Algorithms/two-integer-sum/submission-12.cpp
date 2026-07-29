class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> m;
        for(int n ; n< nums.size();n++){
            m[target-nums[n]]=n+1;
        }
        for (int i ; i<nums.size();i++){
            if (m[nums[i]]!=0 && i!=m[nums[i]]-1 ) return {i,m[nums[i]]-1};
        }
    }
};
