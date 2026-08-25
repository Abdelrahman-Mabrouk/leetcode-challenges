class Solution {
public:
    int candy(vector<int>& ratings) {
        int res = 1, up = 0, down = 0, peak = 0;
        for (int i = 1; i < ratings.size(); ++i) {
            if (ratings[i] > ratings[i - 1])
                res += 1 + (++up), peak = up, down = 0;
            else if (ratings[i] == ratings[i - 1])
                res += 1, up = down = peak = 0;
            else
                res += 1 + (++down) - (down <= peak), up = 0;
        }
        return res;
    }
};