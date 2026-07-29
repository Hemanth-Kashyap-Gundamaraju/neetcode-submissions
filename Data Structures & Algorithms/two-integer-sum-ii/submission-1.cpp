class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l =0;
        int h=numbers.size()-1;
        while(l<h){
            int s= numbers[l]+numbers[h];
            if(s>target) h--;
            else if(s<target) l++;
            else return {l+1,h+1};

        }
        return {};
    }
};
