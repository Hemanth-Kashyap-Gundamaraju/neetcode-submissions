class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1 ;
        int z = 0 ;
        for (auto n : nums){
            if (n==0){
                z++;
            }
            else{
                p*=n;
            }
        }
        vector <int> ret;
        for (auto n : nums){
            if (n!=0){
                if (z>0){
                    ret.push_back(0);
                }
                else{
                    ret.push_back(p/n);
                }
            }
            else {
                if (z>1){
                    ret.push_back(0);
                }
                else{
                    ret.push_back(p);
                }
            }
        }
        return ret;
    }
};
