class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    stack <pair<int,int>>s;
    vector<int>ans(temperatures.size());
    s.push({temperatures[0],0});
    for (int i = 1; i < temperatures.size(); ++i) {
        if(temperatures[i]>temperatures[i-1]) {
            while (!s.empty() && temperatures[i] > s.top().first ){
                ans[s.top().second] = (i - s.top().second);
            s.pop();
        }
        }
                    s.push({temperatures[i],i});

    }
        return ans;
    }
};