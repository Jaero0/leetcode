class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string st;
        int min = 201;

        for(const string &s : strs)
        {
            if(min > s.size())
            {
                min = s.size();
                st = s;
            }
        }

        string ans;

        for(int i = 0; i < min; i++)
        {
            bool isSame = true;

            for(const string &s : strs)
            {
                if(s == st) continue;

                if(s[i] != st[i])
                {
                    isSame = false;
                    break;
                }
            }

            if(!isSame) break;
            ans += st[i];
        }
        return ans;
    }
};