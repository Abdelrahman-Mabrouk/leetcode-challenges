class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long res=1 ;
        bool  f = false;
        if(count(nums.begin(), nums.end(), 0)> 1 ){fill(nums.begin(), nums.end(), 0);
        return nums;} 

        
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]!=0)res *=nums[i]; 
            else f = true;
        }
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]!=0 && f ) nums[i] = 0;
            else if(nums[i]!=0)nums[i] = res /nums[i] ; 
            else nums[i] = res;

        }    
        return nums;
        }
};