class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        queue<char> q;

        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        for(char c : ransomNote)
        {
            q.push(c);
        }

        for(char c : magazine)
        {
            if(q.front() == c)
            {
                q.pop();
            }
        }

        return q.empty();
    }
};