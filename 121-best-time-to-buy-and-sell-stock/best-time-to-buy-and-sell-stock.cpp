class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCp=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minCp){
                minCp=prices[i];
            }
            else{
                int Profit=prices[i]-minCp;
                if(Profit>maxProfit){
                    maxProfit=Profit;
                }
            }

        }
                    return maxProfit;

    }
};