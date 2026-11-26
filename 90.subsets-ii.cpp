/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution
{
public:
    void getSubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &ss, int i = 0)
    {
        if (i == nums.size())
        {
            ss.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getSubsets(nums, ans, ss, i + 1);
        int idx = i + 1;
        ans.pop_back();
        while (idx < nums.size() && nums[idx] == nums[idx - 1])
        {
            idx++;
        }
        getSubsets(nums, ans, ss, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        vector<vector<int>> ss;
        getSubsets(nums, ans, ss);
        return ss;
    }
};
// @lc code=end
