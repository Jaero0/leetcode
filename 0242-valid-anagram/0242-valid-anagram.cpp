class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;

        for(char c : s)
        {
            m[c] += 1;
        }

        for(char c : t)
        {
            m[c] -= 1;
        }

        for(pair<char, int> p : m)
        {
            if(p.second != 0) return false;
        }

        return true;
    }
};