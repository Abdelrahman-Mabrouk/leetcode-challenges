class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l = 0, r = 0, t = 0, mx = 0;
        if (s.size() == 1)return 1;
        while (r < s.size()) {
            while (t < r) {
                if (s[r] == s[t]) {
                    mx = max(mx, r - l);
                    l = t + 1;
                    break;
                } else t++;
            }
            t = l;
            r++;
        }
        mx = max(mx, r - l);
        return mx;
    }
};
