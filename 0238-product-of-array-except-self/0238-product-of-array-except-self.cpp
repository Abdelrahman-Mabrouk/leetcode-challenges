class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long res=0 ;
        int idx = -1;
        if(nums[0]!=0 || nums[1]!=0)res=1;
        if(count(nums.begin(), nums.end(), 0)> 1 ){fill(nums.begin(), nums.end(), 0);
        return nums;} 
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]!=0)res *=nums[i]; 
            else idx = i;
        }
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]!=0 && idx!= -1 ) nums[i] = 0;
            else if(nums[i]!=0)nums[i] = res /nums[i] ; 
            else nums[i] = res;

        }    
        return nums;
        }
};