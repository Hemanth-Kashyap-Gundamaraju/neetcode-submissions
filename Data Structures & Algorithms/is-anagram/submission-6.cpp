class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char,int> m;
        for (auto c : s){
            m[c]++;
        }
        for (auto c : t){
            m[c]--;
        }
        string l = s;
        if (s.size()<t.size()) l=t;
        for (auto c : l){
            if (m[c]!=0) return false;
        }
        return true;
    }
};
