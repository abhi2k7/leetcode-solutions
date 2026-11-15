#
# @lc app=leetcode id=1524 lang=python3
#
# [1524] Number of Sub-arrays With Odd Sum
#


# @lc code=start
class Solution:
    def numOfSubarrays(self, arr: list[int]) -> int:
        odd = sum(p & 1 for p in accumulate(arr))
        return odd * (len(arr) + 1 - odd) % (10**9 + 7)


# @lc code=end
