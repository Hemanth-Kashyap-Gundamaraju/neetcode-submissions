class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <int> z;
        int l=0;
        int res=0;
        for(int i=0;i<s.size();i++){
            while(z.find(s[i])!=z.end()){
                z.erase(s[l]);
                l++;
            }
            z.insert(s[i]);
            res=max(res,i-l+1);
        }
        return res;
    }
};
