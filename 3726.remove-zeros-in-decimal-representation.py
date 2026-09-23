#
# @lc app=leetcode id=3726 lang=python3
#
# [3726] Remove Zeros in Decimal Representation
#

# @lc code=start
class Solution:
    def removeZeros(self, n: int) -> int:
        return int("".join([i for i in str(n) if i != '0']))
# @lc code=end

