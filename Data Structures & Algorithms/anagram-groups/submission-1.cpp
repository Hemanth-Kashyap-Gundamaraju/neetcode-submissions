class Solution {
public:
    map<char,int> init(){
        map<char,int> a ;
        for(int i = 97;i<=122;i++){
                a[i]=1;
        }
        return a;
    }
    map<char,int> check(string& s, map<char,int>  a){
        for( auto c :s){
            a[c]++;
        }
        return a;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        map<map<char,int>,int>m;
        map<char,int> a=init();
        for(auto s : strs){
            map<char,int> b=check(s,a);
            if(m.count(b)==0){
                v.push_back({s});
                m[b]=v.size()-1;

            }
            else{
                v[m[b]].push_back(s);
            }
        }
        // cout<<m;
        return v;
    }
};
