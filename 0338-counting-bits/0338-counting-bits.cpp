class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> v(n + 1);
        v[0] = 0;

        int lastPowNum = 1;

        for(int i = 1; i <= n; i++)
        {
            if(isPowerOf2(i))
            {
                lastPowNum = i;
                v[i] = 1;
            }
            else
            {
                v[i] = v[lastPowNum] + v[i - lastPowNum];
            }
        }

        return v;
    }

    bool isPowerOf2(int n)
    {
        return (n & n-1) == 0;
    }
};