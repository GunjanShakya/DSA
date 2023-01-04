class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        vector<int> arr;
        int count=0,a=tasks[0],sum=0;
        sort(tasks.begin(),tasks.end());
        for(int i=0;i<tasks.size();i++)
        {
         if(tasks[i]==a)
             count++;
         else{
            arr.push_back(count);
             a=tasks[i];
             count=1;
         }
        }
        arr.push_back(count);
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
                return-1;
            else if((arr[i]%3)==0)
               arr[i]=arr[i]/3;
            else
                arr[i]=(arr[i]/3)+1;
        }
        for(int i=0;i<arr.size();i++)
           sum+=arr[i];
        return sum; 
    }
};