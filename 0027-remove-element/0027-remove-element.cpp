class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int i=0,l=0,k=0;
     while(i<nums.size()){
        if(nums[i]!=val){
                nums[l++]=nums[i];
            }
        else k++;    
        i++;
        }
    
    return nums.size()-k;
    }
};