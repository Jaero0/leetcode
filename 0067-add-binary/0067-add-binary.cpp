class Solution {
public:
    string addBinary(string a, string b) {
        
        int bl = b.size() - 1;
        int al = a.size() - 1;

        if(bl > al)
        {
            for(int i = 0; i <= bl; i++)
            {
                if(i > al)
                {
                    a = "0" + a;
                }
            }
        }
        else
        {
            for(int i = 0; i <= al; i++)
            {
                if(i > bl)
                {
                    b = "0" + b;
                }
            }
        }


        string s = "";
        int carry = 0;

        for(int i = b.size() - 1; i >= 0; i--)
        {
            int sum = carry + (a[i] - '0') + (b[i] - '0');

            if(sum == 0) 
            {
                s += "0";
                carry = 0;
            }
            else if(sum == 1)
            {
                s+= "1";
                carry = 0;
            } 
            else if(sum == 2)
            {
                s += "0";
                carry = 1;
            }
            else
            {
                s += "1";
                carry = 1;
            }
        }

        if(carry > 0)
        {
            s += "1";
        }


        reverse(s.begin(), s.end());
        
        return s;
    }
};