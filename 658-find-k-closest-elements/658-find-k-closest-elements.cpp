class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        priority_queue<pair<int,int>> max;
        for(int i=0;i<arr.size();i++)
        {
            max.push({abs(arr[i]-x),arr[i]});
            if(max.size()>k)
                max.pop();
        }
        while(max.size())
        {
            v.push_back(max.top().second);
            max.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};