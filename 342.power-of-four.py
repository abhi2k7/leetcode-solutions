#
# @lc app=leetcode id=342 lang=python3
#
# [342] Power of Four
#

# @lc code=start
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        temp = n
        while temp > 0 and temp % 4 == 0:
            temp //= 4
        return temp == 1
# @lc code=end

