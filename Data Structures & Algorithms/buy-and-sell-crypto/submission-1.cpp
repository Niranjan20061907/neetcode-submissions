class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int l = 0, r = 1;
        while(r < prices.size()){
            if (prices[r] < prices[l]){
                l = r;
                r++;
            }else{
                int profit = prices[r]-prices[l];
                if (profit > max_profit) max_profit = profit;
                r++;
            }
        }
        return max_profit;

    }
};
