class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v; vector<int> ans;
        for(int i=0;i<=rowIndex;i++)
        { vector<int> row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=v[i-1][j]+v[i-1][j-1];
            } v.push_back(row);
         if(i==rowIndex)
             ans=row;
        } return ans;
    }
};