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

        if(f.size() == 0) return true;

        string fv = f;
        std::reverse(fv.begin(), fv.end());

        return fv == f ? true : false;
    }
};