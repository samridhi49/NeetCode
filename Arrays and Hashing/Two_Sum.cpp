class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;

        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if(sum.count(diff) && sum[diff] != i)
                return {sum[diff], i};

            sum[nums[i]] = i;
        }

        return {0, 0};
    }
};

//Time Complexity: O(n)
//Space Complexity: O(n)