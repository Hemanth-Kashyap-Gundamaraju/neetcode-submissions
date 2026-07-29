class Solution {
public:
    bool hasDuplicate(vector<int> nums) {
        map<int,int> m;
        for(auto n :nums){
            if(m[n]) return true;
            m[n]=1;
        }
        return false;
    }
};
