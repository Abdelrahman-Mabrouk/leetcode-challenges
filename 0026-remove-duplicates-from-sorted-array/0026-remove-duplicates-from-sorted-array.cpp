class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int l=0,r=1,k=1;
          if(nums.size()==2 && nums[0]!=nums[1])return 2;
  while(r<nums.size()-1){
          while (nums[l] == nums[r]&& r<nums.size()-1) {

              r++;
          }
      if(nums[l]!=nums[r]){
          k++;
          l++;
          nums[l]=nums[r];

      }

  }
  return k;
}
};