class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Max=0;
        for(int i=0;i<nums.size();i++){
            if(Max==i&&nums[i]==0&&i<(nums.size()-1)){
                return false;
            }
            Max=max(Max,i+nums[i]);
        }
        return true;    
    }
};