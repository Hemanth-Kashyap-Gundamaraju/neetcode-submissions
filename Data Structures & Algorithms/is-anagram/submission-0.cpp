class Solution {
public:
    bool isAnagram(string s, string t) {
map<char,int> ms,mt;
       if(s.size()!=t.size()) return false;
       else{
        for(char c :s){
            if(ms[c])ms[c]++;
            else ms[c]=1;
        }
        for(char c :t){
            if(mt[c])mt[c]++;
            else mt[c]=1;
        }
        for(auto c:s){
            if(ms[c]!=mt[c]) return false;
        }
        return true;
}
    }
};
