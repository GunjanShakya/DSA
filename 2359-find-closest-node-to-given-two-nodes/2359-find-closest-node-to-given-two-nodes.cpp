class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int n1, int n2) {
         vector<bool> v1(edges.size(), false);
        vector<bool> v2(edges.size(), false);
        int n=edges.size();
        for(int i=0; i<n; i++) {
            v1[n1]=true;
            v2[n2]=true;

            if(v1[n2]) {
                return v2[n1] ? min(n1, n2) : n2;
            } else if(v2[n1]) return n1;

            if(edges[n1] != -1) n1=edges[n1];
            if(edges[n2] != -1) n2=edges[n2];

            if(v1[n1] && v2[n2]) return -1;
        }
        return -1;
    }
};