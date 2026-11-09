#
# @lc app=leetcode id=190 lang=python3
#
# [190] Reverse Bits
#

# @lc code=start
class Solution:
    def reverseBits(self, n: int) -> int:
        ans = 0
        num = n
        for i in range(32):
            ans = (ans << 1) | (num & 1)
            num >>= 1
        return int(ans)
# @lc code=end

