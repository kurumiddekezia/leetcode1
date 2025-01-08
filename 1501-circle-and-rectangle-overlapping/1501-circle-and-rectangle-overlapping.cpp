class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearest_x=max(x1, min(x2, xCenter));
        int nearest_y=max(y1, min(y2, yCenter));
        int dx=xCenter-nearest_x;
        int dy=yCenter-nearest_y;
        return pow(dx, 2)+pow(dy, 2)<=pow(radius, 2);
    }
};