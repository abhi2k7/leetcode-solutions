/*
 * @lc app=leetcode id=2965 lang=cpp
 *
 * [2965] Find Missing and Repeated Values
 */

// @lc code=start
class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        unordered_set<int> s;
        int a, b;
        int acctualSum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                acctualSum += grid[i][j];
                if (s.find(grid[i][j]) != s.end())
                {
                    a = grid[i][j];
                }
                s.insert(grid[i][j]);
            }
        }
        int expSum = ((n * n) * (n * n + 1)) / 2;
        b = expSum + a - acctualSum;
        return {a, b};
    }
};
// @lc code=end
