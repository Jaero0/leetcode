class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0) return false;

        vector<int> v;
        while(x > 0)
        {
            cout << x << "\n";
            v.push_back(x % 10);
            x /= 10;
        }

        int size = v.size();
        for(int i = 0; i <= size / 2 - 1; i++)
        {
            cout << v[i] << ", " << v[size - 1 - i] << "\n";

            if(v[i] != v[size - 1 - i]) return false;
        }

        return true;
    }
};