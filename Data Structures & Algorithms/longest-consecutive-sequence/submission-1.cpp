class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> s (nums.begin(),nums.end());
        int lon=0 ,len=0;
        for (auto n : s){
            if (s.find(n-1)==s.end()){
                len = 1;
                while (s.find(n+len)!=s.end()) len++;
                lon=max(lon,len);
            }

        }
        return lon;
        
        
    }
};
