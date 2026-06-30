class Solution {
public:
    int f(int n, vector<int>& dp) {
        if(n <= 1)
            return 1;
        if(dp[n] != -1)
            return dp[n];

        return dp[n] = f(n - 1, dp) + f(n - 2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return f(n, dp);
    }
};

//Time Complexity: O(n) - Each step is calculated once and stored in the dp array
//Space Complexity: O(n) for recursion stack + O(n) for dp array