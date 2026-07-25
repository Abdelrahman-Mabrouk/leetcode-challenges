class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    unordered_set<int>set1(nums.begin(),nums.end());
    if(set1.empty())return 0;
    int res=1,mx=1;
    for(int n : set1){
        if (!set1.count(n - 1)) {
        int res = 1;
        while(set1.count(n+res)){res++;}
         mx=max(mx,res),res=1;
        }
    }
    return  mx;
    }
};