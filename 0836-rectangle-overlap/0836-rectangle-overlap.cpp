class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int xstart=max(rec1[0], rec2[0]);
        int xend=min(rec1[2], rec2[2]);

        int ystart=max(rec1[1], rec2[1]);
        int yend=min(rec1[3], rec2[3]);

        if(xstart<xend && ystart<yend){
            return true;
        }
        return false;
    }
};