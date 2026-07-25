class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            vector <int>res;
    int n = nums.size(),count=0;
    for (int i = 0; i < n; ++i) {
        if(nums[i]==0)count++;
        else res.push_back(nums[i]);
    }
    for (int i = 0; i < count; ++i) {
        res.push_back(0);
    }
    nums = res;
    }
};