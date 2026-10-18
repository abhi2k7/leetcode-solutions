/*
 * @lc app=leetcode id=1552 lang=cpp
 *
 * [1552] Magnetic Force Between Two Balls
 */

// @lc code=start
class Solution
{
public:
    bool isPossible(vector<int> &arr, int n, int c, int minAllowedDist)
    {
        int x = 1, lastposs = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - lastposs >= minAllowedDist)
            {
                x++;
                lastposs = arr[i];
            }
            if (x == c)
            {
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int> &arr, int c)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int st = 1, end = arr[n - 1] - arr[0], ans = -1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (isPossible(arr, n, c, mid))
            {
                ans = mid;
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end
