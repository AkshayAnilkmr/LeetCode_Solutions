class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxProfit=0;
        int mini=prices[0];
        for(int i=0;i<prices.size();i++){
            profit=prices[i]-mini;
            maxProfit=max(maxProfit,profit);
            mini=min(mini,prices[i]);
        }return maxProfit;
    }
};