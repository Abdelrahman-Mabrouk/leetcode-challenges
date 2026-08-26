class Solution {
public:
    int trap(vector<int>& height) {
     cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int l = 0, r = height.size() - 1, res = 0 ;
    int maxleft = height[l], maxright = height[r];
    while (l < r) {
        if (maxleft <= maxright) {
            l++;
            maxleft = max(height[l], maxleft);
            res += maxleft - height[l];
        } else {
            r--;
            maxright = max(height[r], maxright);
            res  += maxright - height[r];
        }
    }
        return res;
    }
};