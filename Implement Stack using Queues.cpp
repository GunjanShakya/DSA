class MyStack {
public: queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) { q1.push(x);
      while(!q2.empty())
      {
          q1.push(q2.front());
          q2.pop();
      }
        
        swap(q1,q2);
    }
    
    int pop() {
        int t=q2.front();
        q2.pop();
        return t;
    }
    
    int top() {
        int t=q2.front();
        return t;
    }
    
    bool empty() {
        return q2.empty();
    }
};
