class Solution {
public:
    int f(vector<int>& nums, int index)
    {
        if(index == 0)
            return nums[0];

        if(index < 0)
            return 0;

        int pick = nums[index] + f(nums, index - 2);
        int not_pick = f(nums, index - 1);

        return max(pick, not_pick);
    }

    int rob(vector<int>& nums) {
        vector<int> temp1, temp2;

        if(nums.size() == 1)
            return nums[0];

        for(int i = 0; i < nums.size(); i++)
        {
            if(i == 0)
            {
                temp1.push_back(nums[i]);
                continue;
            }

            if(i == nums.size() - 1)
            {
                temp2.push_back(nums[i]);
                break;
            }

            temp1.push_back(nums[i]);
            temp2.push_back(nums[i]);
        }

        return max(f(temp1, nums.size() - 2), f(temp2, nums.size() - 2));
    }
};

//Time Complexity: O(2^n)
//Space Complexity: O(n) for recursion stack + O(n) for temp1 + O(n) for temp2