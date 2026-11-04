/*
 * @lc app=leetcode id=3505 lang=cpp
 *
 * [3505] Minimum Operations to Make Elements Within K Subarrays Equal
 */

// @lc code=start
class Solution
{
public:
    multiset<int> left, right;
    long long leftSum = 0, rightSum = 0;

    void add(int num)
    {
        if (left.empty() || num <= *left.rbegin())
        {
            left.insert(num);
            leftSum += num;
        }
        else
        {
            right.insert(num);
            rightSum += num;
        }

        balance();
    }

    void remove(int num)
    {
        auto it = left.find(num);

        if (it != left.end())
        {
            leftSum -= num;
            left.erase(it);
        }
        else
        {
            it = right.find(num);
            rightSum -= num;
            right.erase(it);
        }

        balance();
    }

    void balance()
    {
        while (left.size() > right.size() + 1)
        {
            auto it = prev(left.end());
            int val = *it;

            left.erase(it);
            leftSum -= val;

            right.insert(val);
            rightSum += val;
        }

        while (left.size() < right.size())
        {
            auto it = right.begin();
            int val = *it;

            right.erase(it);
            rightSum -= val;

            left.insert(val);
            leftSum += val;
        }
    }

    long long getCost()
    {
        long long median = *left.rbegin();

        return median * left.size() - leftSum + rightSum - median * right.size();
    }

    long long minOperations(vector<int> &nums, int x, int k)
    {
        int n = nums.size();

        vector<long long> cost(n - x + 1);

        for (int i = 0; i < x; i++)
            add(nums[i]);

        cost[0] = getCost();

        for (int i = x; i < n; i++)
        {
            remove(nums[i - x]);
            add(nums[i]);

            cost[i - x + 1] = getCost();
        }

        const long long INF = LLONG_MAX / 2;

        vector<long long> prev(n + 1, 0);
        vector<long long> curr(n + 1, INF);

        for (int j = 1; j <= k; j++)
        {
            fill(curr.begin(), curr.end(), INF);

            for (int i = 1; i <= n; i++)
            {
                curr[i] = curr[i - 1];

                if (i >= x && prev[i - x] != INF)
                {
                    curr[i] = min(
                        curr[i],
                        prev[i - x] + cost[i - x]);
                }
            }

            prev.swap(curr);
        }

        return prev[n];
    }
};
// @lc code=end
