class Solution {
public:
    int first(vector<int> a,int t)
    {
        int s=0,e=a.size()-1; int res=-1;
        while(s<=e)
        {
            int mid=s+ (e-s)/2;
            if(t==a[mid])
            {
                res=mid;
                e=mid-1;
            }
            else if(t>a[mid])
                s=mid+1;
            else e=mid-1;
        } return res;
    }
    int sec(vector<int> a,int t)
    {
        int s=0,e=a.size()-1; int res=-1;
        while(s<=e)
        {
            int mid=s+ (e-s)/2;
            if(t==a[mid])
            {
                res=mid;
                s=mid+1;
            }
            else if(t>a[mid])
                s=mid+1;
            else e=mid-1;
        } return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=first(nums,target);
        int b=sec(nums,target);
        vector<int> v;
        v.push_back(a); v.push_back(b);
        return v;
    }
};