class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int>result(n+m);
    int i =m-1;
        int j=n-1;
        int l=n+m-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j] ){nums1[l--]=nums1[i];i--;}
            else if(nums1[i]<nums2[j]){nums1[l--]=nums2[j];j--;}
        }
        while(i>=0){
            nums1[l--]=nums1[i--];
        }
    while(j>=0){
        nums1[l--]=nums2[j--];
    }
    }
};