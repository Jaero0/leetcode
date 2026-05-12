class Solution {
public:
    int romanToInt(string s) {
        
        map<string, int> m = {
            {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400},
            {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40},
            {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}
        };

        int sum = 0;
        
        for(int i = 0; i < s.size(); i++) 
        {

            string t(1, s[i]); 

            if(i == s.size() - 1) 
            {
                sum += m[t];
                continue;
            }

            if(t == "C" && (s[i+1] == 'M' || s[i+1] == 'D')) 
            {
                t += s[i + 1];
                i += 1;
            }
            else if(t == "X" && (s[i+1] == 'L' || s[i+1] == 'C'))
            {
                t += s[i + 1];
                i += 1;
            }
            else if(t == "I" && (s[i+1] == 'V' || s[i+1] == 'X')) 
            { 
                t += s[i + 1];
                i += 1;
            }

            sum += m[t];
        }

        return sum;
    }
};