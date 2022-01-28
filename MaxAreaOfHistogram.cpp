class Solution {
public:
   vector<int> NSR(vector<int> arr,int n)
   {
       stack<pair<int,int>> s;
       vector<int> v;
       for(int i=n-1;i>=0;i--)
       {
           if(s.size()==0)
               v.push_back(n);
           else if(s.size()>0 && s.top().first < arr[i])
               v.push_back(s.top().second);
               else if(s.size()>0 && s.top().first >= arr[i])
               {
                   while(s.size()>0 && s.top().first>=arr[i])
                       s.pop();
                   if(s.size()==0)
               v.push_back(n);
                   else  v.push_back(s.top().second);
               } s.push({arr[i],i});
       }
       reverse(v.begin(),v.end());
       return v;
   } 
     vector<int> NSL(vector<int> arr,int n)
     {
          stack<pair<int,int>> s;
       vector<int> v;
       for(int i=0;i<n;i++)
       {
           if(s.size()==0)
               v.push_back(-1);
           else if(s.size()>0 && s.top().first < arr[i])
               v.push_back(s.top().second);
               else if(s.size()>0 && s.top().first >= arr[i])
               {
                   while(s.size()>0 && s.top().first>=arr[i])
                       s.pop();
                   if(s.size()==0)
               v.push_back(-1);
                   else  v.push_back(s.top().second);
               } s.push({arr[i],i});
       }
       return v;
     }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> left, right,area;
        right=NSR(heights,heights.size());
        left=NSL(heights,heights.size());
        for(int i=0;i<left.size();i++)
        { 
            int x=(right[i]-left[i]-1)*heights[i];
            area.push_back(x);
        }
            sort(area.begin(), area.end());
        reverse(area.begin(), area.end());
        
        return area[0];
    }
};
