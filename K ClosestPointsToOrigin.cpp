class Solution {
public:
   //typedef pair<int,pair<int,int>> ppi;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) { 
        
     priority_queue< pair<int,pair<int,int>>> m;
        for(int i=0;i<points.size();i++)
        {
            m.push({points[i][0]*points[i][0]+points[i][1]*points[1][0],{points[i][0],points[i][1]}});
            if(m.size()>k)
                m.pop();
            
        }  vector<vector<int>> a;
        while(m.size())
        {
           vector<int> v;
            v.push_back(m.top().second.first);
            v.push_back(m.top().second.second);
            a.push_back(v);
            m.pop();
        }
        return a;
    }
};
