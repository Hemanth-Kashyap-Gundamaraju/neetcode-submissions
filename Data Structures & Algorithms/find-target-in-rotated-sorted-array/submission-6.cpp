class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int k=i+(j-i)/2;
            if(nums[k]==target){
                return k;
            }
            if(nums[i]<=nums[k]){
            if(nums[k]>target&&target>=nums[i]){
                j=k-1;
            }
            else{
                i=k+1;
            }
            }
            else{
                if(nums[k]<target&&target<=nums[j]){
                    i=k+1;
                }
                else{
                    j=k-1;
                }
            }


        }
        return -1;
    }
};
