class Solution {
public:
    bool isAnagram(string s, string t) {

        //if(s.size() != t.size()) return false;

        map<char, int> m;

        for(int i = 0; i < s.size(); i++)
        {
            m[s[i]] += 1;
            m[t[i]] -= 1;
        }

        for(pair<char, int> p : m)
        {
            if(p.second != 0) return false;
        }

        return true;
    }
};