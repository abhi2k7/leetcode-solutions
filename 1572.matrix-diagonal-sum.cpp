/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */

// @lc code=start
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int diaSum = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            diaSum += mat[i][i];
            if (i != mat.size() - i - 1)
            {
                diaSum += mat[i][mat.size() - i - 1];
            }
        }
        return diaSum;
    }
};
// @lc code=end
