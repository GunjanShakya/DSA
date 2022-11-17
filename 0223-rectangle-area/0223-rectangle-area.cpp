class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int r1= (ax2-ax1)*(ay2-ay1);
    int r2= (bx2-bx1)*(by2-by1);
    int l= (bx1>ax1)?bx1: ax1;
    int right= (ax2<bx2)?ax2:bx2;
    int r= (right>l)?right:l;
    int down= (by1>ay1)?by1: ay1;
    int top= (ay2<by2)?ay2:by2;
    int t= (top>down)?top:down;
    return r1+r2 - (t-down)*(r-l);
    }
};