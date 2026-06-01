class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string st;
        int min = 201;

        for(string s : strs)
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

            for(string s : strs)
            {
                if(s == st) continue;

                if(s[i] != st[i])
                {
                    isSame = false;
                    break;
                }
            }

            if(isSame)
            {
                ans += st[i];
            }
            else
            {
                if(ans.size() > 0) break;
                
                return "";
            }
        }
        return ans;
    }
};