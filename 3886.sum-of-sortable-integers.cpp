/*
 * @lc app=leetcode id=3886 lang=cpp
 *
 * [3886] Sum of Sortable Integers
 */

// @lc code=start
class Solution
{
public:
    long long sortableIntegers(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> s(nums);
        sort(s.begin(), s.end());

        long long ans = 0;
        for (int k = 1; k <= n; k++)
        {
            if (n % k != 0)
                continue;

            bool ok = true;
            for (int l = 0; l < n && ok; l += k)
            {
                int desc = 0, start = 0;
                for (int j = 0; j < k; j++)
                {
                    int a = nums[l + j];
                    int b = nums[l + (j + 1) % k];
                    if (a > b)
                    {
                        desc++;
                        start = (j + 1) % k;
                    }
                }
                if (desc > 1)
                {
                    ok = false;
                    break;
                }

                for (int j = 0; j < k; j++)
                {
                    if (nums[l + (start + j) % k] != s[l + j])
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
                ans += k;
        }
        return ans;
    }
};
// @lc code=end
