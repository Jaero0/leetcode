class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        short alpha[26];

        for (char c : magazine)
            alpha[c - 'a']++;

        for (char c : ransomNote) {
            if (--alpha[c - 'a'] < 0)
                return false;
        }

        return true;
    }
};