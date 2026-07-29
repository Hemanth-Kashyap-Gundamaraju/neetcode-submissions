class Solution {
public:
    int trap(vector<int>& height) {
        int area = 0;
        int maxl = height[0] , maxr=height[height.size()-1] ;
        for (int i=0 , j=height.size()-1 ;i<j;){
            if (maxl<maxr){
                i++;
                maxl = max(maxl,height[i]);
                area+=maxl-height[i];
            }
            else{
                j--;
                maxr = max(height[j],maxr);
                area+=maxr-height[j];
            }
        }
        return area;
    }
};
