class Solution {
public:
    int maxFrequency(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    long long total=arr[0],res=1,size = arr.size();
    long long l=0,r=0;

    while (r<size){
        if((r-l+1)*arr[r] > k+total) {
            total-=arr[l];
            res=max(res,r-l);
            l++;
        }

        else {
            r++;
            if (r<size)total+=arr[r];
        }
    }
    res=max(res,r-l);

return res;
    }
};