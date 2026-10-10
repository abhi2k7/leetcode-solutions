/*
 * @lc app=leetcode id=2333 lang=cpp
 *
 * [2333] Minimum Sum of Squared Difference
 */

// @lc code=start
class Solution
{
public:
    long long minSumSquareDiff(vector<int> &nums1, vector<int> &nums2, int k1, int k2)
    {
        int n = nums1.size();
        long long k = (long long)k1 + k2;
        vector<int> diff(n);
        long long total = 0;
        int high = 0;
        for (int i = 0; i < n; i++)
        {
            diff[i] = abs(nums1[i] - nums2[i]);
            total += diff[i];
            high = max(high, diff[i]);
        }
        if (total <= k)
            return 0;
        int low = 0;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            long long ops = 0;
            for (int d : diff)
            {
                ops += max(0, d - mid);
            }
            if (ops <= k)
            {
                high = mid;
            }
            else
                low = mid + 1;
        }
        int level = low;
        long long ops = 0, ans = 0;
        for (int d : diff)
        {
            int red = min(d, level);
            ans += 1LL * red * red;
            if (d > level)
                ops += d - level;
        }
        long long remaining = k - ops;
        for (int i = 0; i < n && remaining > 0; i++)
        {
            if (diff[i] >= level && level > 0)
            {
                ans -= 1LL * level * level;
                ans += 1LL * (level - 1) * (level - 1);
                remaining--;
            }
        }
        return ans;
    }
};
// @lc code=end

