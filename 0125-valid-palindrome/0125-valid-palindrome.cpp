class Solution {
public:
    bool isPalindrome(string s) {
    int i=0,ii=s.size()-1;
    while (i< ii) {
        char a = tolower(s[i]),b= tolower(s[ii]);
        if(!isalnum(a)){i++; continue;}
        if(!isalnum(b)){ii--; continue;}
        if(a!=b || i==ii)return false;
        i++,ii--;

    }
    return true;
    }
};