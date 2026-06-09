class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0) return false;

        deque<int> v;
        while(x > 0)
        {
            v.push_back(x % 10);
            x /= 10;
        }

        int size = v.size();
        for(int i = 0; i <= size / 2 - 1; i++)
        {
            if(v.front() != v.back()) return false;

            v.pop_front();
            v.pop_back();
        }

        return true;
    }
};