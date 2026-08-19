class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;
        
        // لا داعي للوصول للعنصر الأخير في اللوب لأننا لو وصلنا قبله يكفينا قفزة
        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            
            // إذا وصلنا لنهاية المدى الحالي، يجب أن نقفز قفزة جديدة
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
            }
        }
        
        return jumps;
    }
};