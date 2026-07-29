class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        else{
            map<char,int> ms,mt;
            for(auto c:s){
                ms[c]++;
            }
            for(auto c:t){
                mt[c]++;
            }
            for(auto p:s){
                if(ms[p]!=mt[p]){
                    cout<<ms[p]<<mt[p];
                    return false;
                }
            }
            return true;
        }
    }
};
