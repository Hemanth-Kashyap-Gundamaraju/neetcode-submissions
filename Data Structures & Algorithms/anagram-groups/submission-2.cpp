class Solution {
private:
    map<char,int> frequency(string& s){
        map<char,int> n;
        for (auto c : s){
            n[c]++;
        }
        return n;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> m;
        vector<map<char,int>>n;
        for (auto s : strs){
            m[frequency(s)].push_back(s);
        }

        vector<vector<string>> r;
        for(auto i : m){
            r.push_back(i.second);
        }
        return r;
    }
};
