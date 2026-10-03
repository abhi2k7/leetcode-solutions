/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        vector<int> solun;
        int n = nums.size();
        for (int i = 1; i <= n; i++)
        {
            freq[i]++;
        }
        for (int num : nums)
        {
            freq[num]--;
        }
        for (auto [k, v] : freq)
        {
            if (v == 1)
            {
                solun.push_back(k);
            }
        }
        return solun;
    }
};
// @lc code=end
