class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int size = nums.size();
        int i = size/2;
        int max = size;

        int count = 0;
        while(true)
        {
            int t = nums[i];

            if(t > target)
            {
                max = i;
                i /= 2;
            }
            else if(t < target)
            {
                i = (i + max) / 2;
            }
            else
            {
                return i;
            }
            
            count++;

            if(count > size)
            {
                return -1;
            }
            
        }
    }
};