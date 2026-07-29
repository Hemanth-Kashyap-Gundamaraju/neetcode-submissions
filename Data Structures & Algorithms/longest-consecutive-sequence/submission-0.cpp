class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(auto n:nums){
            m[n]=0;
        }
        int res=0;
        for(auto k:m){
            if(m.count(k.first)==1){
                m[k.first]=m[k.first-1]+1;
                // continue;
                res=max(m[k.first],res);
            }
        }
        return res;
    }
};
