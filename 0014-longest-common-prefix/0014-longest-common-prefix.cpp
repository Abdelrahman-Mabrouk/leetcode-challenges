class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0], res = "";
        int count = 0,mn=s.size();
            for (int i =1; i < strs.size(); ++i) {
                for (int k = 0; k < strs[i].size(); ++k) {
                   if (s[k] == strs[i][k]) {
                        count++;
                    }
                   else break;
                }
                mn=min(mn,count);
                count =0;
            }


        return s.substr(0, mn);
    }
};
