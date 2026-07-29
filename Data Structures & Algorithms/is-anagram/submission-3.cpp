class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<int,int> m;
        for(auto c :s){
            m[c]++;
        }
        for(auto c :t){
            if(m[c]>0) m[c]--;
            else return false;
        }
        for(auto c : s){
            if(m[c]!=0) return false;
        }
        return true;
    }
};
