class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string shortest = strs[0];

        for (const string& s : strs) 
        {
            if (s.size() < shortest.size()) 
            {
                shortest = s;
            }
        }

        int i = 0;

        for (; i < shortest.size(); i++) 
        {
            for (const string& s : strs) 
            {
                if (s[i] != shortest[i]) 
                {
                    return shortest.substr(0, i);
                }
            }
        }

        return shortest;
    }
};