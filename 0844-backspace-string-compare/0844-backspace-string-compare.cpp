class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> sq;
        stack<char> tq;

        for(char c : s)
        {
            if(c == '#')
            {
                if(!sq.empty())
                    sq.pop();
            }
            else
            {
                sq.push(c);
            }
        }

        for(char c : t)
        {
            if(c == '#')
            {
                if(!tq.empty())
                    tq.pop();
            }
            else
            {
                tq.push(c);
            }

            cout << tq.size() << endl;
        }

        if(sq.size() != tq.size()) return false;

        while(!sq.empty())
        {
            char sc = sq.top();
            char tc = tq.top();

            if(sc != tc) return false;

            sq.pop();
            tq.pop();
        }

        return true;
    }
};