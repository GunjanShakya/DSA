class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s; int ans=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")
                s.pop();
            else if(ops[i]=="D")
            {     
                 s.push(s.top()*2); 
        }
            else if(ops[i]=="+")
            {
                int x=s.top();
                s.pop();
                int y=s.top()+x;
                s.push(x);
                s.push(y);
               // s.push((x+y));
            }
            else s.push(stoi(ops[i]));
        } while(s.size())
        {
            ans+=s.top();
            s.pop();
        } return ans;
    }
};