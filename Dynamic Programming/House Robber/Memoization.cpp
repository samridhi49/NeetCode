class Solution {
public:
    int f(vector<int>& nums, int index, vector<int>& dp)
    {
        if(index == 0)
            return nums[0];

        if(index == 1)
            return max(nums[0], nums[1]);

        if(dp[index] != -1)
            return dp[index];

        int pick = nums[index] + f(nums, index - 2, dp);
        int not_pick = f(nums, index - 1, dp);

        return dp[index] = max(pick, not_pick);
    }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, -1);
        return f(nums, nums.size() - 1, dp);
    }
};

//Time Complexity: O(n) - Each house is processed once, and the results are stored in the dp array to avoid redundant calculations
//Space Complexity: O(n) for recursion stack + O(n) for dp array