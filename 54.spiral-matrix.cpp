/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &mat)
    {
        vector<int> ans;
        int m = mat.size(), n = mat[0].size();
        int srow = 0, erow = m - 1, scolumn = 0, ecolumn = n - 1;
        while (srow <= erow && scolumn <= ecolumn)
        {
            for (int j = scolumn; j <= ecolumn; j++)
            {
                ans.push_back(mat[srow][j]);
            }
            for (int i = srow + 1; i <= erow; i++)
            {
                ans.push_back(mat[i][ecolumn]);
            }
            for (int j = ecolumn - 1; j >= scolumn; j--)
            {
                if (srow == erow)
                    break;
                ans.push_back(mat[erow][j]);
            }
            for (int j = erow - 1; j >= srow + 1; j--)
            {
                if (scolumn == ecolumn)
                    break;
                ans.push_back(mat[j][scolumn]);
            }
            srow++;
            erow--;
            scolumn++;
            ecolumn--;
        }
        return ans;
    }
};
// @lc code=end
