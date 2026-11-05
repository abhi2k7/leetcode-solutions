/*
 * @lc app=leetcode id=1385 lang=cpp
 *
 * [1385] Find the Distance Value Between Two Arrays
 */

// @lc code=start
class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int x = 0;
        for (int val1 : arr1)
        {
            bool c = false;
            for (int val2 : arr2)
            {
                if (abs(val1 - val2) <= d)
                {
                    c = true;
                    break;
                }
            }
            if (!c)
            {
                x++;
            }
        }
        return x;
    }
};
// @lc code=end
