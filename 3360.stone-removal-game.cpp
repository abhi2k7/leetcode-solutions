/*
 * @lc app=leetcode id=3360 lang=cpp
 *
 * [3360] Stone Removal Game
 */

// @lc code=start
class Solution
{
public:
    bool canAliceWin(int n)
    {
        bool alicaturn = true;
        int remove = 10;
        while (n >= remove)
        {
            n -= remove;
            remove--;
            alicaturn = !alicaturn;
        }
        return !alicaturn;
    }
};
// @lc code=end
