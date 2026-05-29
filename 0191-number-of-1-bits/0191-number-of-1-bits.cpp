class Solution {
public:
    int hammingWeight(int n) 
    {
        string s;

        while(n != 0)
        {
            int t = n % 2;
            n /= 2;
            if(t == 0) continue;
            s += to_string(t);
        }

        return s.size();
    }
};