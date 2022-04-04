class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         // if(digits.size()==1)
         // {
         //     if(digits[i]==)
         // }
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
                 // digits[i-1]+=1; break;
            }
            else {
                digits[i]+=1;
                 break;
            }
        } if(digits[0]==0)
        {  reverse(digits.begin(),digits.end());
        digits.push_back(1);   reverse(digits.begin(),digits.end()); }
        return digits;
    }
};