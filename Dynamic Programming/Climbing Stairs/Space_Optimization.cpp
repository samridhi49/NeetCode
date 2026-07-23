class Solution {
public:
    int climbStairs(int n) {
        int prev1 = 1;
        int prev2 = 1;

        for(int i = 2; i <= n; i++)
        {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};

//Time Complexity: O(n) - Each step is calculated once
//Space Complexity: O(1) - Only a constant amount of space is used for the variables