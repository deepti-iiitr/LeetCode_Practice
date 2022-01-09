class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], y1 = rec1[1], x2 = rec1[2], y2 = rec1[3];
        int x3 = rec2[0], y3 = rec2[1], x4 = rec2[2], y4 = rec2[3];  
        if(x2 <= x3 || x4 <= x1)
            return false;
        if (y2 <= y3 || y4 <= y1)
             return false;
        return true;
    }
};