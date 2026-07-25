class Solution {
public:
    bool isAnagram(string s, string t) {
 if (s.length() != t.length()) return false;

        vector<int> alphabets(26, 0);

        for(int i = 0; i < s.length(); i++)
            alphabets[s[i]-'a']++;
        
        for(int i = 0; i < t.length(); i++)
        {
            if (alphabets[t[i]-'a'] <= 0) return false;
            alphabets[t[i]-'a']--;
        }
        return true;
    }
};