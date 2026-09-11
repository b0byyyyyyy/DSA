class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  left =0;
        int n = prices.size();
        int right =1;
        int res = 0;

        while(right<n){
            if(prices[left]<prices[right]){
                res += prices[right]-prices[left];
            }
            left++;
            right++;
        }
        return res;
    }
};