class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int l=0,r=nums.size()-1,k=0;
     while(l<=r){
        if(nums[l]==val){
            k++;
            while(nums[r]==val && l<r){
                k++;
                r--;
            }
          
            swap(nums[r--],nums[l]);
        }
        l++;
     }
    return nums.size()-k;
    }
};