/*
 * @lc app=leetcode id=2442 lang=cpp
 *
 * [2442] Count Number of Distinct Integers After Reverse Operations
 */

// @lc code=start
class Solution
{
public:
    int countDistinctIntegers(vector<int> &nums)
    {
        set<int> new_nums;
        for (int num : nums)
        {
            new_nums.insert(num);
        }
        for (int num : nums)
        {
            int temp = num, rev = 0;
            while (temp > 0)
            {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            new_nums.insert(rev);
        }
        return new_nums.size();
    }
};
// @lc code=end
