class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);

        if(nums.size() == 1)
            return nums[0];

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i = 2; i < nums.size(); i++)
        {
            int pick = nums[i] + dp[i - 2];
            int not_pick = dp[i - 1];

            dp[i] = max(pick, not_pick);
        }

        return dp[nums.size() - 1];
    }
};

//Time Complexity: O(n) - Each house is processed once, and the results are stored in the dp array to avoid redundant calculations
//Space Complexity: O(n) for dp array