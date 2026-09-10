/*
 * @lc app=leetcode id=1837 lang=cpp
 *
 * [1837] Sum of Digits in Base K
 */

// @lc code=start
class Solution {
public:
    int sumBase(int n, int k) {
    int base = 0;

    while (n > 0) {
        base += n % k;
        n /= k;
    }

    return base;

    }
};
// @lc code=end

