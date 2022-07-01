class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        for(int i=0;i<boxTypes.size();i++){
            int a=boxTypes[i][0];
            boxTypes[i][0]=boxTypes[i][1];
            boxTypes[i][1]=a;
           
        }sort(boxTypes.begin(),boxTypes.end());
        int k=0;
    for(int j=boxTypes.size()-1;j>-1;j--){
         
            if(boxTypes[j][1]>=truckSize){
                k+=boxTypes[j][0]*(truckSize);
                break;
            }
                 k+=boxTypes[j][0]*boxTypes[j][1];
                truckSize-=boxTypes[j][1];   
        }
        return k;
    }
};