class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int>result(n+m);
    int i =0;
        int j=0;
        int l=0;
        while(i<m && j<n &&n>0 && m>0){
            if(nums1[i]<=nums2[j] ){result[l++]=nums1[i];i++;}
            else if(nums1[i]>nums2[j]){result[l++]=nums2[j];j++;}
        }
        while(i<m){
            result[l++]=nums1[i++];
        }
    while(j<n){
        result[l++]=nums2[j++];
    }
        nums1=result;
    }
};