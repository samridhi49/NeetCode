class Solution {
public:
    int f(vector<int>& nums, int index, vector<int>& dp)
    {
        if(index == 0)
            return nums[0];

        if(index < 0)
            return 0;

        if(dp[index] != -1)
            return dp[index];

        int pick = nums[index] + f(nums, index - 2, dp);
        int not_pick = f(nums, index - 1, dp);

        return dp[index] = max(pick, not_pick);
    }

    int rob(vector<int>& nums) {
         if(nums.size() == 1)
            return nums[0];

        vector<int> temp1, temp2;

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

        vector<int> dp1(nums.size() - 1, -1);
        vector<int> dp2(nums.size() - 1, -1);

        return max(f(temp1, nums.size() - 2, dp1), f(temp2, nums.size() - 2, dp2));
    }
};

//Time Complexity: O(n)
//Space Complexity: O(n) for recursion stack + O(n) for dp array + O(n) for temp1 + O(n) for temp2