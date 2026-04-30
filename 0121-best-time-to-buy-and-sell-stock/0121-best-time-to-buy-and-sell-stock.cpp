class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int s = prices.size();
        int minP = prices[0];
        int max = 0;

        for(int i = 0; i < s; i++)
        {
            int p = prices[i];
            minP = std::min(minP, p);
            max = std::max(max, p - minP);
        }

        return max;
    }
};