class Solution {
public:
    int reverse(long long n) {
          long long   i, res = 0;
    bool isneg = false;
    if (n < 0) {
        n *= -1;
        isneg = true;
    }
    else if(n == 0) return 0;

    i = log10(n);

    while (n) {
        res = res*10 + n % 10 ;
        n /= 10;
        i--;
    }

    return ((res > pow(2,31)-1)? 0 :   ((isneg) ? res * -1 : res));
    }
};