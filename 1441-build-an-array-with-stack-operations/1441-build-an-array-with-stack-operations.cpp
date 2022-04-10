class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
//     vector<string> a; int in=0;
//         for(int i=1;i!=target.size();i++)
//         {
//            if(i==target[in]) {a.push_back("Push"); in++;}
//           else 
//           { a.push_back("Push");
//            a.push_back("Pop"); }
            
//         } return a;
         vector<string> ans;
        int index = 0;
        
        for(int i = 1 ; index!=target.size() ; i++){
            if(target[index] == i){
                ans.push_back("Push");
                index++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        
        return ans;
    }
};