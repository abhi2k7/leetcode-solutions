/*
 * @lc app=leetcode id=2553 lang=cpp
 *
 * [2553] Separate the Digits in an Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> solun;
        for (int num : nums)
        {
            vector<int> tempdig;
            while (num > 0)
            {
                tempdig.push_back(num % 10);
                num /= 10;
            }
            reverse(tempdig.begin(), tempdig.end());
            for (int dig : tempdig)
            {
                solun.push_back(dig);
            }
        }
        return solun;
    }
};
// @lc code=end
