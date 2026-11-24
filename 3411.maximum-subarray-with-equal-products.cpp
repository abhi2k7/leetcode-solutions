/*
 * @lc app=leetcode id=3411 lang=cpp
 *
 * [3411] Maximum Subarray With Equal Products
 */

// @lc code=start
class Solution
{
public:
    int maxLength(vector<int> &nums)
    {
        int n = nums.size();
        int ans = min(n, 2);
        for (int i = 0; i < n; i++)
        {
            long long prod = 1;
            long long g = 0;
            long long lc = 1;
            for (int j = i; j < n; j++)
            {
                bool valid = true;
                for (int k = i; k < j; k++)
                {
                    if (gcd(nums[k], nums[j]) > 1)
                    {
                        valid = false;
                        break;
                    }
                }
                if (!valid)
                {
                    break;
                }
                prod *= nums[j];
                g = gcd(g, nums[j]);
                lc = lcm(lc, (long long)nums[j]);
                if (j - i + 1 >= 3 && prod == g * lc)
                {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};
// @lc code=end
