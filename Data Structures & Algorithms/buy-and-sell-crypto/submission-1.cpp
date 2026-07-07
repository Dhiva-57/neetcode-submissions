class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int low=prices[0];
        int index=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<low){
                low=prices[i];
                index=i;
            }
            int current_profit = prices[i] - low;
            if(current_profit > max) max = current_profit;
        }
        return max;
    }
};