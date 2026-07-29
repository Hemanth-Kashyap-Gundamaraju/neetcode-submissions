class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        priority_queue <pair<int,int>> pq;
        for(auto n: nums){
            m[n]++;
        }
        for(auto i : m){
            pq.push({i.second,i.first});
        }
        vector<int> v;
        for(k;k>0;k--){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
