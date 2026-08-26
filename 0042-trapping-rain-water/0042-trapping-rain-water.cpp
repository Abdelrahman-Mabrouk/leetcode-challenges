
class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        stack<int>stack;
        int a[size];
        int sum = 0;

        stack.push(0);
        a[0]=-1;
        int j=0;

        for (int i = 1; i < size; ++i) {
            if(height[i]> height[stack.top()]){
                while(!stack.empty() && height[i]> height[stack.top()]){
                    a[stack.top()] = height[i];
                    stack.pop();
                }
                stack.push(i);
                a[i] = -1;

            }
            else{
            stack.push(i);
            a[stack.top()] = -1;
            }
        }
        int mx=height[size-1];
        for (int i = size-2; i >= 0; i--) {
            mx = max(mx,height[i+1]);
            if(a[i]==-1){
                a[i]=mx;
            }
        }
        for (int i = 1; i < size; ++i) {
            if(height[i] != a[j] ){
               sum+= (min(height[j],a[j])-height[i]);
            }

            else{
                j = i;
            }
        }
        return sum;
        }
    };