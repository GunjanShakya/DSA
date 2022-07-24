class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size(); vector<int> v; int cg=0,tg=0,tc=0,j=1,ctr=0;
        if(n!=cost.size())
            return -1;
        if(n==1 and gas[0]-cost[0]>=0)
            return 0;
        else if(n==1 and gas[0]-cost[0]<0) return -1;
        for(int i=0;i<n;i++)
        {
            tg+=gas[i];
            tc+=cost[i];
        }
        if(tc>tg)
            return -1;
        for(int i=0;i<n;i++)
        {
            cg+=gas[i]-cost[i];
            if(cg<0)
            {
                cg=0;
                ctr=i+1;
            }
//             if(gas[i]>cost[i])
//             { 
//                 cg=gas[i]-cost[i];
               
//                 while(j<n)
//                 { int x=(j+i)%n;
//                     cg+=gas[x]-cost[x];
                
//                   if(cg<0)
//                      break;
//                  else {j++; ctr++;}  
//                 } 
//                 if(j==n and ctr>0)
//                     return i;
//                 else {j=1; ctr=0; }
                
            }     return ctr;

        }
    
};


/*
intution : consider x->y->z if we can reach station y from x then we dont have to bother reaching y from z and we only need to care about reaching from z to x:
*/