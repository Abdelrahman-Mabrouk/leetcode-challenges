class Solution {
public:
    int romanToInt(string s) {
        int val[128] = {0};
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;

        int sum = 0;
        int n = s.size();

        for (int i = 0; i < n - 1; ++i) {
            int curr = val[s[i]];
            if (curr < val[s[i + 1]]) {
                sum -= curr;
            } else {
                sum += curr;
            }
        }
        sum += val[s[n - 1]];

        return sum;
    }
};