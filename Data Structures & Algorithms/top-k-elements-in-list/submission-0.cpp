class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        priority_queue<pair<int,int>> pq;
        for(auto i :nums){
            m[i]++;
        }
        for(auto i :m){
            pq.push({i.second,i.first});
        }
        vector<int> ret;
        for(int i=0;i<k;i++){
            // cout<<pq.top()<<endl;
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};
