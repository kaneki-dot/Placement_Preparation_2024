class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>pm(prices.size());
        pm[0]=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            pm[i]=min(pm[i-1],prices[i]);
        }
        int ans=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            ans=max(ans,prices[i]-pm[i]);
        }
        return ans;
    }
};
