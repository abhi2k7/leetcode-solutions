/*
 * @lc app=leetcode id=3658 lang=cpp
 *
 * [3658] GCD of Odd and Even Sums
 */

// @lc code=start
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = pow(n,2) , sumEven = n * (n + 1);
        return gcd(sumOdd,sumEven);
    }
};
// @lc code=end

