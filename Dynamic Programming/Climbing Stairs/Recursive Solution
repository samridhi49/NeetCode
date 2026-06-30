class Solution {
public:
    int climbStairs(int n) {
        if(n == 0)
            return 1;
        if(n == 1)
            return 1;

        int left = climbStairs(n - 1);
        int right = climbStairs(n - 2);
        
        return left + right;
    }
};

//Time Complexity: O(2^n) - Each step has two choices (1 step or 2 steps), leading to an exponential number of combinations
//Space Complexity: O(n) for recursion stack