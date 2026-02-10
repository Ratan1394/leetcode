class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int small = prices[0];
        for(int i=0;i<prices.size();i++){
            small = min(small, prices[i]);
            int sum = prices[i] - small;
            profit = max(profit, sum);
           
        }
        return profit;
    }
};