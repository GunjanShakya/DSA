class MinStack {
public:
    stack<long long> s;
    long long mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.size()==0)
        {
            s.push(val);
            mini=val;
        }
        else if(val>=mini)
            s.push(val);
        else if(val<mini)
        {
            long long x=(long long) val;
            x*=2;
            x-=mini;
            mini=val;
            s.push(x);
        }
    }
    
    void pop() {
        if(s.size()==0) return ;
        else 
        {
            if(s.top()>=mini)
                s.pop();
            else 
            {
                mini=2*mini-s.top();
                s.pop();
            }
        }
    }
    
    int top() {
        if(s.size()==0) return -1;
        else
        {
            if(s.top()>=mini)
                return s.top();
            else return mini;
        }
    }
    
    int getMin() {
         if(s.size()==0) return -1;
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
