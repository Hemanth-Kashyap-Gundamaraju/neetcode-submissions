class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto num:nums){
            if(m[num]>=1){
                return true;
            }
            else{
                m[num]=1;
            }
        }
        return false;
    }
};