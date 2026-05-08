class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> m;

        for(int i : nums)
        {
            m[i] += 1;
        }

        int s = nums.size() / 2;

        for(auto p : m)
        {
            if(p.second > s) return p.first;
        }

        return 0;
    }
};