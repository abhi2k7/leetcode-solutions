/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> solun;
        int mx = *max_element(candies.begin(), candies.end());
        for (int candie : candies)
        {
            bool result = (candie + extraCandies) >= mx;
            solun.push_back(result);
        }
        return solun;
    }
};
// @lc code=end
