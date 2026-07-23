class Solution {
public:
    int paths(int current_m, int current_n, int m, int n)
    {
        if(current_m == m - 1 && current_n == n - 1)
            return 1;

        if(current_m >= m || current_n >= n)
            return 0;
        
        return paths(current_m + 1, current_n, m, n) + paths(current_m, current_n + 1, m, n);
    }

    int uniquePaths(int m, int n) {
        return paths(0, 0, m, n);
    }
};

//Time Complexity: O(2^(m + n))
//Space Complexity: O(m + n)