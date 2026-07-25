class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool f=false;
        set <int>x;
    for (int i = 0; i < nums.size(); ++i) {
        x.insert(nums[i]);
    }
    if(x.size()<nums.size()){f=true;}
    return f;
}};
