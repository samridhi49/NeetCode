class Solution {
public:
    int f(vector<int>& nums, int index)
    {
        if(index == 0)
            return nums[0];

        if(index == 1)
            return max(nums[0], nums[1]);

        int pick = nums[index] + f(nums, index - 2);
        int not_pick = f(nums, index - 1);

        return max(pick, not_pick);
    }
    int rob(vector<int>& nums) {
        return f(nums, nums.size() - 1);
    }
};

//Time Complexity: O(2^n) - Each house has two choices (pick or not pick), leading to an exponential number of combinations
//Space Complexity: O(n) for recursion stack