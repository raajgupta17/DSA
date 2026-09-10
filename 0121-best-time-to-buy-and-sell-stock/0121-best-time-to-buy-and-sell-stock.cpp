class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int min = prices[0];
        int p=0;

        for(int i=1;i<n;i++){
            if(prices[i] < min){
                min = prices[i];
            }
            else{
                p=max(p,prices[i]-min);
            }
        }return p;
    }
};