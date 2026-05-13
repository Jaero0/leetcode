class Solution {
public:
    int getNextValidCharIndex(string &str, int index)
    {
        int skip = 0;

        while(index >= 0)
        {
            if(str[index] == '#')
            {
                skip++;
                index--;
            }
            else if(skip > 0)
            {
                skip--;
                index--;
            }
            else
            {
                break;
            }
        }

        return index;
    }

    bool backspaceCompare(string s, string t) {

        int i = s.size() - 1;
        int j = t.size() - 1;

        while(i >= 0 || j >= 0)
        {
            i = getNextValidCharIndex(s, i);
            j = getNextValidCharIndex(t, j);

            if(i < 0 && j < 0)
                return true;

            if(i < 0 || j < 0)
                return false;

            if(s[i] != t[j])
                return false;

            i--;
            j--;
        }

        return true;
    }
};