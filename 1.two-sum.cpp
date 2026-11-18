/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            int fir = nums[i];
            int sec = target - fir;
            if (v.find(sec) != v.end())
            {
                return {i, v[sec]};
            }
            v[fir] = i;
        }
        return {-1, -1};
    }
};
