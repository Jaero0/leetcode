class Solution {
public:
    bool isPalindrome(int x) 
    {
        int origin = x;
        long reverse = 0;

        while(x > 0)
        {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }

        return origin == reverse;
    }
};