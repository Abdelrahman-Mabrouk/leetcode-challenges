
class Solution {
public:
    string reverseWords(string s) {
         reverse(s.begin(), s.end());
         string t ="";
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]==' ' && i ==0) continue;
            else if(s[i]==' ' && s[i-1]==' ')continue;
            else t+=s[i];
        }
        if(t[t.size()-1]==' ') t.erase(t.size()-1);
         int l=0,r=0;
        while(r<t.size()){
            if(r!=0 && t[r]==' ' && t[r-1]!=' '){
                reverse(t.begin()+l, t.begin()+r);
                l=r;
            }
            if(r!=0 && t[r]!=' ' && t[r-1]==' ') {
                l=r;
            }
                r++;

        }
        reverse(t.begin()+l, t.begin()+r);
         return t;
    }
};