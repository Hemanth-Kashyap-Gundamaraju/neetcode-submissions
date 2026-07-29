class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m ;
        for(int n :nums){
            if(m[n]!=1){
                m[n]=1;
            }
            else return true;
        }
        return false;
    }
};