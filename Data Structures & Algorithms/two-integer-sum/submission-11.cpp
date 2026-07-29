class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        for(int n=0;n<nums.size();n++){
            m[nums[n]]=n+1;
        }
        for(int i=0;i<nums.size();i++){
            int y= target - nums[i];
            if(m[y]!=0 & m[y]!=i+1) return {i,m[y]-1};
        }
        return {};
    }
};
