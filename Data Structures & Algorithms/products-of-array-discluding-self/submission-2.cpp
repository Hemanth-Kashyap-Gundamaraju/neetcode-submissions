class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        // int pp=1;
        int z=0;
        for(int n:nums){
            if(n!=0){
                p*=n;
                // pp*=n;
            }
            else{
                z++;
            }
        }
        vector <int> r(nums.size());
        if (z>=2) return r;
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0 & z<1){
                    r[i]=p/nums[i];
                }
                else if(nums[i]==0) {
                    r[i]=p;
                }
            }
        }
        return r;
    }
};
