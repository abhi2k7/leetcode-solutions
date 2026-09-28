/*
 * @lc app=leetcode id=2433 lang=cpp
 *
 * [2433] Find The Original Array of Prefix Xor
 */

// @lc code=start
class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {
        vector<int> solun;
        int x = 0;
        solun.push_back(pref[0]);
        for (int i = 1; i < pref.size(); i++)
        {
            solun.push_back(pref[i] ^ pref[i - 1]);
        }
        return solun;
    }
};
// @lc code=end
