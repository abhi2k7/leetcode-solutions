/*
 * @lc app=leetcode id=410 lang=cpp
 *
 * [410] Split Array Largest Sum
 */

// @lc code=start
class Solution
{
public:
    bool isValid(vector<int> &nums, int n, int k, int maxAllowedPages)
    {
        int stu = 1, pages = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > maxAllowedPages)
                return false;

            if (pages + nums[i] <= maxAllowedPages)
            {
                pages += nums[i];
            }
            else
            {
                stu++;
                pages = nums[i];
            }
        }

        return stu <= k;
    }

    int splitArray(vector<int> &nums, int k)
    {
        int n = nums.size();

        if (k > n)
            return -1;

        int sum = 0;
        int maxElement = 0;

        for (int num : nums)
        {
            sum += num;
            maxElement = max(maxElement, num);
        }

        int st = maxElement;
        int end = sum;
        int ans = -1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (isValid(nums, n, k, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }

        return ans;
    }
};
// @lc code=end
