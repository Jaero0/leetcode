class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char, int> m;

        for(char c : ransomNote)
        {
            m[c] += 1;
        }

        for(char c : magazine)
        {
            m[c] -= 1;
        }

        bool isFalse = true;
        for(auto p : m)
        {
            if(p.second > 0)
            {
                isFalse = false;
                break;
            }
        }

        return isFalse;
    }
};