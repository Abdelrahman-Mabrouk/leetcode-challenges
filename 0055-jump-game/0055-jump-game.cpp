class Solution {
public:
    bool canJump(vector<int>& nums) {
 bool result = false,flag=1;
    int size =nums.size();
    int l =size-1;
    int indx =-1;
    if(size==1)return 1;
    if(nums[0]==0)return 0;
    while(l>=0){
      if(nums[l]==0 && flag){
          indx= l;
          flag = 0;
      }
      else{
          if(indx!=-1 && indx < nums[l]+l || nums[l]+l == size-1){
              result = true;
              flag = 1;
              indx = -1;
          }
          else if(indx!=-1 && indx >= nums[l]+l)
              result =false;
      }

      l--;
    }
    
    if(indx == -1)return 1;
return result;
    }
};