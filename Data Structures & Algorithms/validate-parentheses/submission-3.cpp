class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(auto c:s){
            if(c=='('||c=='{'||c=='['){
                stack.push_back(c);
            }
            if (stack.empty()) return false;
            else if(c==')'){
                if(stack.back()!='('){
                    return false;
                }
                stack.pop_back();
            }
            else if(c==']'){
                if(stack.back()!='['){
                    return false;
                }
                stack.pop_back();
            }
            else if(c=='}'){
                if(stack.back()!='{'){
                    return false;
                }
                stack.pop_back();

            }
        }
        if(stack.size()!=0)return false;
        return true;
    }
};
