class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pdt=1,p=1,z=0;
        for(auto i:nums){
            if(i!=0){
                pdt*=i;
                p*=i;
            }
            if(i==0){
                pdt*=i;
                z++;
            }
        }
        vector<int> r;
        for(auto i:nums){
            if(pdt!=0){
                r.push_back(pdt/i);
            }
            else if(pdt==0){
            if(i==0){
                if(z==1){
                    r.push_back(p);
                }
                else{
                    r.push_back(0);
                }
            }
            else{r.push_back(0);}
            }
        }
        return r;
    }
};
