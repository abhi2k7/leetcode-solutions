/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        vector<int> x;
        for (int num : nums1)
        {
            mp[num]++;
        }
        for (int val : nums2)
        {
            if (mp[val] > 0)
            {
                x.push_back(val);
                mp[val]--;
            }
        }
        return x;
    }
};
// @lc code=end
