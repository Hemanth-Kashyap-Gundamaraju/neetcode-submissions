class MinStack {
public:
    int t=0;
    vector<int> s;
    vector<int> m;
    MinStack() {
        // int top=0;
    }
    
    void push(int val) {
        if(s.empty()){
            s.push_back(val);
            m.push_back(val);
            // t=val;
        }
        else{
            s.push_back(val);
            if(val>m.back()){
               val=m.back();
            }
            m.push_back(val);
        }
    }
    
    void pop() {
        s.pop_back();
        m.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return m.back();
    }
};
