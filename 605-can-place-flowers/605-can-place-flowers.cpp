class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1 and flowerbed[0]==0 and n==1)
            return true;
        else if(flowerbed.size()==1 and flowerbed[0]!=0 and n==0)
            return true;
        else if(flowerbed.size()==1 and flowerbed[0]!=0 and n>0)
            return false;
        for(int i=0;i<flowerbed.size() && n>0;i++)
        { if(i==0)
        {
            if(flowerbed[i]==0 and flowerbed[i+1]==0)
            {
                n--; flowerbed[i]=1;
            }
        }
         else if(i==flowerbed.size()-1)
         {
             if(flowerbed[i]==0 and flowerbed[i-1]==0)
             {
                 n--;
                 flowerbed[i]=1;
             }
         }
            
       else
       {
           if(flowerbed[i]==0 and flowerbed[i-1]==0 and flowerbed[i+1]==0)
        {n--; flowerbed[i]=1; }
       }
    } return n==0; }
};