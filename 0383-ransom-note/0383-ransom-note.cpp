class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        short alpha[26];

        for(char c : ransomNote)
        {
            alpha[c - 'a']++;
        }

        for(char c : magazine)
        {
            alpha[c - 'a']--;
        }

        for(int i : alpha)
        {
            if(i > 0) return false;
        }

        return true;
    }
};