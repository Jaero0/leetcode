class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        bool isOver = false;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                for(int j = i; j < nums.size(); j++)
                {
                    if(nums[j] != 0)
                    {
                        int temp = nums[j];
                        nums[j] = 0;
                        nums[i] = temp;
                        break;
                    }
                    else if(j == nums.size() - 1 && nums[j] == 0)
                    {
                        isOver = true;
                    }
                }

                if(isOver) break;
            }


        }
    }
};