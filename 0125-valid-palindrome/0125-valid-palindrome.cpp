class Solution {
public:
    bool isPalindrome(string s) {

        string f = "";
        for(char c : s)
        {
            if(!('a' <= c && c <= 'z') && !('A' <= c && c <= 'Z') && !('0' <= c && c <= '9')) continue;

            if ('A' <= c && c <= 'Z')
            {
                f += tolower(c);
            }
            else
            {
                f += c;
            }
        }
        
        bool isSame = true;

        int l = 0;
        int r = f.size() - 1;
        while(l < r)
        {
            char c1 = f[l];
            char c2 = f[r];

            if (c1 != c2)
            {
                isSame = false;
                break;
            }

            l++;
            r--;
        }

        return isSame;
    }
};