class Solution {
public:
    bool isPalindrome(int n) {
          if (n < 0) {
      return false;
    }
    else if(n == 0) return true;
    long long res = 0, t= n;
    while (n) {
        res = (res *10) +  n % 10 ;
        n /= 10;
    }

    return (res==t);
    }
};