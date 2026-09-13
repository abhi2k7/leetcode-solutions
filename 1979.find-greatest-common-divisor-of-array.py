#
# @lc app=leetcode id=1979 lang=python3
#
# [1979] Find Greatest Common Divisor of Array
#


# @lc code=start
class Solution:
    def findGCD(self, nums: List[int]) -> int:
        mx, mn = max(nums), min(nums)
        return gcd(mn, mx)


# @lc code=end
