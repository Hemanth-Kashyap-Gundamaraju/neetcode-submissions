class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        for ( int i = 0 , j = heights.size()-1 ; i<j ; ){
            int area = min(heights[i],heights[j]) * (j-i);
            cout<< area<<endl;
            maxA = max(maxA,area);
            if (heights[i]<=heights[j])i++;
            else if (heights[i]>heights[j])j--;
        }
        return maxA ; 
    }
};
