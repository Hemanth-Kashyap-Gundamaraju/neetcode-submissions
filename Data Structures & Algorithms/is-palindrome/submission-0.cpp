class Solution {
public:
    bool alphanum(char c){
        if(c>='0'&&c<='9'||c>='A'&&c<='Z'||c>='a'&&c<='z')return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            
            if(!alphanum(s[i])){
                i++;
                continue;
            }

            if(!alphanum(s[j])){
                j--;
                continue;
            }
            
            if(tolower(s[i])!=tolower(s[j]))return false;
            i++;
            j--;

        }
        return true;
    }
};
