class Solution {
public:
    int maxArea(vector<int>& heights) {
       cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(0);
         int l=0,r=heights.size()-1,mx=-1;
    while (l < r) {
        int volume = min(heights[l], heights[r]) * ((r) - l);
        mx = max(volume,mx);
        if(heights[l] <= heights[r])l++;
        else r--;
    }
    return mx;
    }
};