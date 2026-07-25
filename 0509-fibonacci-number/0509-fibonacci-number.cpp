class Solution {

public:
    int fibi(int n , vector<int>& store) {
        if(n==0)return 0;
        else if(n==1)return 1;
        if(store[n] != -1) return store[n];
        store[n]=fibi(n-1,store)+fibi(n-2,store);
        return store[n];
    }
    int fib(int n) {

        vector<int> store(n+1 , -1);
        return fibi(n , store);
        
    }
};