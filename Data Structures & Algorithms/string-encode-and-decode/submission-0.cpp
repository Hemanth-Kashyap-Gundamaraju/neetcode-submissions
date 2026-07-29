class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto st:strs){
                s+=to_string(st.size());
                s+="#";
                s+=st;

        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ss;
        for(int i=0;i<s.size();i++){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            ss.push_back(s.substr(j+1,len));
            i=j+len;
        }
        return ss;
    }
};
