class Solution {
public:
    int getValue(char c) 
    {
        switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
    
    int romanToInt(string s) {
        int sum = 0;
        int size = s.size();

        for (int i = 0; i < size; i++) 
        {
            int current = getValue(s[i]);

            if (i < size - 1) {
                int next = getValue(s[i + 1]);

                if (current < next) {
                    sum += (next - current);
                    i++; // 두 글자를 처리했으므로 인덱스 점프
                    continue;
                }
            }
            sum += current;
        }
        return sum;
    }
};