class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_ = INT_MIN;

        if(nums.size() == 1)
            return nums[0];
        
        for(int i = 0; i < nums.size(); i++)
        {
            int product = nums[i];
            max_ = max(max_, product);

            for(int j = i + 1; j < nums.size(); j++)
            {
                product *= nums[j];

                max_ = max(max_, product);
            }
        }  

        return max_;
    }
};

//Time Complexity: O(n^2)
//Space Complexity: O(1)
