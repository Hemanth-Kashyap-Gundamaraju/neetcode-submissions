class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int t= temperatures.size();
        vector <int> res(t);
        for(int i =t-2;i>=0;i--){
            int j=i+1;
            while(j<t && temperatures[j]<=temperatures[i]){
                if(res[j]==0){
                    j=t;
                    break;
                }
                j+=res[j];
            }
            if(j<t) res[i]=j-i;
        }
        return res;
    }

};
