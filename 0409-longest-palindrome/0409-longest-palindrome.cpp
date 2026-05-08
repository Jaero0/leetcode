class Solution {
public:
    int longestPalindrome(string s) {
        
        short alphaL[26] = {0};
        short alphaU[26] = {0};

        for(char c : s)
        {
            if('a' <= c && c <= 'z')
            {
                alphaL[c - 'a'] += 1;
            }
            else
            {
                alphaU[c - 'A'] += 1;
            }
        }

        bool isLeft1 = false;
        int lengthL = 0;
        int lengthU = 0;
        
        for(int i = 0; i < 26; i++)
        {
            short sL = alphaL[i];
            short sU = alphaU[i];

            if(!isLeft1)
            {
                if(sL % 2 == 1 || sU % 2 == 1) isLeft1 = true;
            }

            lengthL += sL / 2;
            lengthU += sU / 2;
        }

        return isLeft1 ? (lengthL + lengthU) * 2 + 1 : (lengthL + lengthU) * 2;
    }
};