class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> op;
        int i=0,j=0; list<int> l;
         if (k>nums.size()) // edge case
        {
            op.push_back(*max_element(nums.begin(),nums.end()));
            return op;
         }
        while(j<nums.size())
        {
           while(l.size()>0 and l.back()<nums[j])    //Calculations
               l.pop_back();
            l.push_back(nums[j]);
            
            
            if(j-i+1<k)                           // Reach to window size
                j++;
            
            else if(j-i+1==k)                    // Window size reached
            {
                op.push_back(l.front());        // Ans calculation
                if(l.front()==nums[i])
                    l.pop_front();             // Slide the window
                i++; j++;
            }
        } return op;
    }
};