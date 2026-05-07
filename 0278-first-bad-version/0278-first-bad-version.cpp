// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:

    int firstBadVersion(int n) {

        int l = 1;
        long mid = 0;
        
        while(l <= n)
        {
            mid = ((long)l + n) / 2;

            if(isBadVersion(mid))
            {
                n = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return l;

    }
};