class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mx = -1 , min = INT_MAX;
    int result=0;
    for (int i = 0; i < prices.size(); ++i) {
        if(min > prices[i]){result=max(mx - min,result);min = prices[i]; mx=-1;}
        if(mx < prices[i]) mx = prices[i];
    }
        result = max(result, mx-min);

      if (result > 0) return result;
    return 0;
    }
};