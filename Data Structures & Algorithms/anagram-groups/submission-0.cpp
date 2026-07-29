class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        map<string,vector<string>> m;
        for(auto s : strs){
            string ss=s;
            sort(ss.begin(),ss.end());
            m[ss].push_back(s);
        }
        for(auto s:m){
            ret.push_back(s.second);
        }
        return ret;
    }
};
