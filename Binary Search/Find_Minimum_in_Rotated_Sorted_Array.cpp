/* BRUTE FORCE */

// class Solution {
// public:
//     int findMin(vector<int> &nums) {
//         sort(nums.begin(), nums.end());

//         return nums[0];
//     }
// };

//Time Complexity: O(nlogn) - Sorting the array
//Space Complexity: O(1) - No extra space is used

/* BINARY SEARCH */

class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0; 
        int right = nums.size() - 1;

        while(left < right)
        {
            int mid = (left + right)/2;

            if(nums[mid] > nums[right])
                left = mid + 1;

            else
                right = mid;
        }

        return nums[right];
    }
};

//Time Complexity: O(logn)
//Space Complexity: O(1)