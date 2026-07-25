class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size(); ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int target =  nums[i];
        int l=i+1 ,r= nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]+target==0){ans.push_back({target,nums[l],nums[r]});l++;r--;
                        while (l < r && nums[l] == nums[l - 1]) {
                l++;
            }}
            else if(nums[l]+nums[r]+target < 0)l++;
            else r--;
        }
    }
    return ans;
    }
};