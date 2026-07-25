class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int,int>res;
    for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];
        if(res.find(complement) != res.end()){
            res[i]=res[complement];
            return {res[complement],i};
        }
        res[nums[i]]=i;
    }
            return {};
    }
};