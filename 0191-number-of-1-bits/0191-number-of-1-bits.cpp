/*
class Solution {
public:
    int hammingWeight(int n) 
    {
        int count = 0;
        for (int i = 0; i < 32; i++) 
        {
            if ((n >> i) & 1) 
            {
                count++;
            }
        }
        return count;
    }
};
*/

class Solution {
public:
    int hammingWeight(int n) 
    {
        string s;
        while(n != 0)
        {
        	int t = n%2;
            n /= 2;
            if(t == 0) continue;
            s += "1";
        }
        
        return s.size();
    }
};