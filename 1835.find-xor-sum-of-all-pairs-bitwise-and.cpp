/*
 * @lc app=leetcode id=1835 lang=cpp
 *
 * [1835] Find XOR Sum of All Pairs Bitwise AND
 */

// @lc code=start
class Solution
{
public:
    int getXORSum(vector<int> &arr1, vector<int> &arr2)
    {
        int xor1 = 0, xor2 = 0;
        for (int ele : arr1)
        {
            xor1 ^= ele;
        }
        for (int ele : arr2)
        {
            xor2 ^= ele;
        }
        return xor1 & xor2;
    }
};
// @lc code=end
