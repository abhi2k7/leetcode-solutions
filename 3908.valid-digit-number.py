#
# @lc app=leetcode id=3908 lang=python3
#
# [3908] Valid Digit Number
#

# @lc code=start
class Solution:
    def validDigit(self, n: int, x: int) -> bool:
        nums = [int(i) for i in str(n)]
        return nums[0] != x and x in nums

# @lc code=end

