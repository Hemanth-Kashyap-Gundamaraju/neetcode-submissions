class Solution {
public:
    bool isPalindrome(string s) {
        int n =s.size();
        for (int i = 0 , j = n-1; i<j;){
            while (i<j && !alphaNum(s[i])) i++;
            while (i<j && !alphaNum(s[j])) j--;
            if (tolower(s[i])!=tolower(s[j])) return 0;
            i++;
            j--;
        }
        return 1;
    }
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
