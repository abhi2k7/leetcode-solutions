/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        int i;
        while (i + 1 < n && arr[i] < arr[i + 1])
        {
            i++;
        }
        if (i == 0 || i == n - 1)
        {
            return false;
        }
        while (i + 1 < n && arr[i] > arr[i + 1])
        {
            i++;
        }
        return i == n - 1;
    }
};
// @lc code=end
