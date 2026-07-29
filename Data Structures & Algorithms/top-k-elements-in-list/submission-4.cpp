class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        vector <vector<int>> r(nums.size() + 1);
        for(auto n :  nums){
            freq[n]++;
        }
        for (auto f :freq){
            r[f.second].push_back(f.first);
        }
        vector <int> ret;
        for (int i=r.size()-1 ;i>=0 && ret.size() < k; i-- ){
            for (auto val : r[i]) {
                ret.push_back(val);
                if (ret.size() == k) break;
            }
        }
        return ret;
    }
};
