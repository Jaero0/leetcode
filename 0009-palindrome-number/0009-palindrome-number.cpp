class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0) return false;

        vector<int> v;
        while(x > 0)
        {
            v.push_back(x % 10);
            x /= 10;
        }

        int size = v.size();
        for(int i = 0; i <= size / 2 - 1; i++)
        {
            if(v[i] != v[size - 1 - i]) return false;
        }

        return true;
    }
};