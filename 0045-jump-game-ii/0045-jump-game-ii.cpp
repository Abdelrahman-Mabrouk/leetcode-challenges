class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size() , result = 0, mx = 0,i = 0,n=nums[0],idx=0;
        if (size  == 1)return 0;
        while(i<size) {
            if(nums[i]+i>=mx){
                mx= nums[i] + i;
                idx = i;
            }
            i++;
            if(i == n+1 && i!=size){
                i =idx;
                n = i  + nums[i] ;
                result++;
                mx= 0;
            }

        }
        return result+1;

    }
};
