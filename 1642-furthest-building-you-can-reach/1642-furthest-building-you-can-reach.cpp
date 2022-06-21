class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i, n = heights.size(), brickUsed = 0, diff;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(i=1; i<n; i++) {
            diff = heights[i]-heights[i-1];
           
            if(diff > 0) {
                pq.push(diff);
                if(ladders < pq.size()) brickUsed += pq.top(), pq.pop();
                if(brickUsed > bricks) return i-1;                                       
  }
        }
        return n-1;
    }
};