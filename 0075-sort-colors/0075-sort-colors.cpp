class Solution {
   public: void merge(vector<int> &nums, int l, int mid, int r) {
    int i = l, j = mid + 1, k = 0;
    vector<int> b(r - l + 1);
    while (i <= mid && j <= r) {
        if (nums[i] <= nums[j])b[k++] = nums[i++];
        else b[k++] = nums[j++];
    }
    while (i <= mid)b[k++] = nums[i++];
    while (j <= r)b[k++] = nums[j++];
    for (int h = 0; h < b.size(); ++h) {
        nums[l + h] = b[h];
    }
}

public: void merge_sort(vector<int> &nums, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        merge_sort(nums, l, mid);
        merge_sort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }
}

public:
    void sortColors(vector<int>& nums) {
            merge_sort(nums, 0, nums.size() - 1);

    }
};