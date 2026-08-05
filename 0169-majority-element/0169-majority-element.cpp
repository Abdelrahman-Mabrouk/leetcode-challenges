class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1,result=0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                if (count>n/2)result = nums[i-1];
                count=1;
            }
            else count++;

        }
        if (count>n/2)result = nums[n-1];
        return result;
    }
};