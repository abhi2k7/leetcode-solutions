/*
 * @lc app=leetcode id=1486 lang=cpp
 *
 * [1486] XOR Operation in an Array
 */

// @lc code=start
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        vector<int> nums;
        int ele;
        for(int i = 0; i < n; i++)
        {
            ele = start + (2 * i);
            nums.push_back(ele);
        }
        int ans = 0;
        for (int i : nums)
        {
            ans ^= i;
        }
        return ans;
    }
};
// @lc code=end
