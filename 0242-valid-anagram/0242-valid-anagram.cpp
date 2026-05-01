class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        int m[27];

        for(int i = 0; i < s.size(); i++)
        {
            m[s[i] - 'a'] += 1;
            m[t[i] - 'a'] -= 1;
        }

        for(int i = 1; i < 27; i++)
        {
            if(m[i] != 0) return false;
        }

        return true;
    }
};