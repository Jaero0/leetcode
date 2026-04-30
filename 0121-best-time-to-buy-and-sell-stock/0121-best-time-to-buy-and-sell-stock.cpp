class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int s = prices.size();
        int minP = prices[0];
        int max = 0;

        for(int i = 0; i < s; i++)
        {
            minP = std::min(minP, prices[i]);
            max = std::max(max, prices[i] - minP);
        }

        return max;
    }
};