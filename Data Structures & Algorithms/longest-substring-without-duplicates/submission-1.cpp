class Solution {
public:
    bool hasDuplicates(string &s, int l, int r) {
        unordered_set<char> ss(s.begin() + l, s.begin() + r);
        return (int)ss.size() != (r - l);
    }

    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, n = s.size(), m = 0;

        while (r <= n) {
            while (hasDuplicates(s, l, r)) {   
                l++;
            }
            m = max(m, r - l);
            r++;
        }

        return m;
    }
};