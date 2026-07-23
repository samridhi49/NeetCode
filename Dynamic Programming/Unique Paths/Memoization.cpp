class Solution {
public:
    int paths(int current_m, int current_n, int m, int n, vector<vector<int>>& dp)
    {
        if(current_m == m - 1 && current_n == n - 1)
            return 1;

        if(current_m >= m || current_n >= n)
            return 0;

        if(dp[current_m][current_n] != -1)
            return dp[current_m][current_n];
        
        return dp[current_m][current_n] = paths(current_m + 1, current_n, m, n, dp) + paths(current_m, current_n + 1, m, n, dp);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return paths(0, 0, m, n, dp);
    }
};

//Time Complexity: O(m * n) 
//Space Complexity: O(m * n) for dp array + O(m + n) for recursion stack