class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int t = temperatures.size();
        vector<int> res(t);
        for(int i=t-1;i>=0;i--){
            int j=i+1;
            while(temperatures[j]<=temperatures[i]&&j<t){
                if (res[j]==0){
                    j=t;
                    break;
                }
                // else{
                    j+=res[j];
                // }
            }
            if (j<t){
                res[i]=j-i;
            }
        }
        return res;
    }
};
