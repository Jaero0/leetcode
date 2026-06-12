class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int s1 = word1.size();
        int s2 = word2.size();

        string ans;
        int i1 = 0;
        int i2 = 0;
        
        while (i1 < s1 || i2 < s2)
        {
            if(i1 < s1) ans += word1[i1];
            if(i2 < s2) ans += word2[i2];

            i1++;
            i2++;
        }

        return ans;
    }
};