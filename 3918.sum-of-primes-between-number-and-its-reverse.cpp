/*
 * @lc app=leetcode id=3918 lang=cpp
 *
 * [3918] Sum of Primes Between Number and Its Reverse
 */

// @lc code=start
class Solution
{
public:
    int sumOfPrimesInRange(int n)
    {
        int sum = 0, temp = n, rev = 0;
        while (temp > 0)
        {
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }
        int mx = max(n, rev);
        int mn = min(n, rev);
        for (int i = mn; i <= mx; i++)
        {
            bool isPrime = true;
            if (i < 2)
            {
                continue;
            }
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                }
            }
            if (isPrime)
            {
                sum += i;
            }
        }
        return sum;
    }
};
// @lc code=end
