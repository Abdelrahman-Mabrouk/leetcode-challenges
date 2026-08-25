
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if (n <= 1) return n;

        int res = 1;
        int up = 0;
        int down = 0;
        int peak = 0;

        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                down = 0;
                up++;
                peak = up;
                res += 1 + up;
            }
            else if (ratings[i] == ratings[i - 1]) {
                up = 0;
                down = 0;
                peak = 0;
                res += 1;
            }
            else {
                up = 0;
                down++;
                res += 1 + down - (down <= peak ? 1 : 0);
            }
        }

        return res;
    }
};