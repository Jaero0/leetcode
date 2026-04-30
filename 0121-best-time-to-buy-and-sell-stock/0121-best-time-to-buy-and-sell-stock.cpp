class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minP = prices[0];
        int max = 0;

        for(int p : prices)
        {
            minP = std::min(minP, p);
            max = std::max(max, p - minP);
        }

        return max;
    }
};