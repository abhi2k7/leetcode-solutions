/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int start = 0, end = numbers.size() - 1;
        vector<int> solun;
        while (start < end)
        {
            int sum = numbers[start] + numbers[end];
            if (sum > target)
            {
                end--;
            }
            else if (sum < target)
            {
                start++;
            }
            else
            {
                solun.push_back(start + 1);
                solun.push_back(end + 1);
                break;
            }
        }
        return solun;
    }
};
// @lc code=end
