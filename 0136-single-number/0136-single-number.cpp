class Solution {
public:
    int singleNumber(vector<int>& a) {
           long long  xor2 = 0, N = a.size();

    for (int i = 0; i < N ; i++) {
        xor2 ^=a[i]; 
    }
    return xor2;
    }
};