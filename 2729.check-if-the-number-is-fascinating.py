#
# @lc app=leetcode id=2729 lang=python3
#
# [2729] Check if The Number is Fascinating
#


# @lc code=start
class Solution:
    def isFascinating(self, n: int) -> bool:
        nums = str(n) + str(2 * n) + str(3 * n)
        return len(nums) == 9 and set(nums) == set("123456789")


# @lc code=end
