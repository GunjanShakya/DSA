class Solution {
public:
//     int lastStoneWeight(vector<int>& stones) { int n=stones.size();
//           while(stones.size()>1)
//         {
//             sort(stones.begin(), stones.end(), greater<int>());
//             int a=stones[0],b=stones[1]; vector<int>::iterator it1, it2;
//             it1=stones.begin(),it2=stones.begin()+1;
//             if(a>b)
//                 stones.push_back(a-b);
                
//         }
//         // if(stones.size()==1)
//             return stones[0];
    int lastStoneWeight(vector<int>& stones) { sort(stones.begin(), stones.end());
        while(stones.size()>1)
        {
            int i= stones.size()-1;
            int a=stones[i],b=stones[i-1];
            stones.pop_back();
            stones.pop_back();
            if(a>b)
                 stones.push_back(a-b);
            sort(stones.begin(), stones.end());
        } if(stones.size()==0) return 0;
                                              return stones[0];
    //     priority_queue<int> maxh; vector<int> v; int i=0
    //  while(stones.size()>1 )
    // {
    //     maxh.push(stones[i]);
    //     if(maxh.size()>(stones.size()-2))
    //     { v.push_back(maxh.top());
    //         maxh.pop();  
    //     }  vector<int>::iterator it1, it2;
    //          it1=stones.begin(),it2=stones.begin()+1;
    //          if(abs(v[0]-v[1]))
    //              stones.push_back(a-b);
    // } 
    //   return stones[0];
    }
};