class Solution {
public:
     int trap(vector<int>& arr) {
         int n=arr.size();
        int ml[n],mr[n],water[n],sum=0;
         ml[0]=arr[0];
         for(int i=1;i<n;i++)
             ml[i]=max(ml[i-1],arr[i]);
         mr[n-1]=arr[n-1];
         for(int i=n-2;i>=0;i--)
             mr[i]=max(mr[i+1],arr[i]);
         for(int i=0;i<n;i++)
             water[i]=min(ml[i],mr[i])-arr[i];
         for(int i=0;i<n;i++)
             sum+=water[i];
         return sum;
    }
    
/***********************************************************************************************
    int trap(vector<int>& height) {
       if(height.size()<=2)
           return 0;
        int n=height.size();
        int mol=height[0];
        int mor=height[n-1];
        int l=1;
        int r=n-2;
        int t=0;
      while(l<=r) {
          if(mol<=mor)
        {
            if(height[l]>mol)
                mol=height[l];
            else t+=(mol-height[l]);
                l=l+1;
        }
        else {
            if(mor<height[r])
                mor=height[r];
            else t+=(mor-height[r]);
            r=r-1;
        }
    } return t;
    } ***************************************************************************************/  
};