class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if (n <= 1) return n;

        int res = 1;
        int up = 1;
        int down = 1;
        int peak = 0;

        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                down = 1;
                up++;
                peak = up;
                res +=  up;
            }
            else if (ratings[i] == ratings[i - 1]) {
                up = 1;
                down = 1;
                peak = 0;
                res += 1;
            }
            else {
                up = 1;
                down++;
                res +=  down - (down <= peak ? 1 : 0);
            }
        }

        return res;
    }
};