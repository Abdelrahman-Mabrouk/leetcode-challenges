class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            k%=n;
        if (k == 0) return;
            vector <int>res;

    int l= n-k,count=0;
    while(count<n){
        res.push_back(nums[l]);
        count++;
        l=(l+1)%n;
    }
    nums = res;
    }
};