class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> r;
        r.push_back(intervals[0]);
        for(auto i :intervals){
            int b=i[0];
            int e=i[1];
            int le=r.back()[1];
            if(b<=le){
                r.back()[1]=max(e,le);
            }
            else{
                r.push_back(i);
            }
        }
        return r;
    }
};
