#
# @lc app=leetcode id=507 lang=python3
#
# [507] Perfect Number
#


# @lc code=start
class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        sm = 0
        for i in range(1, num):
            if num % i == 0:
                sm += i

        return num == sm


# @lc code=end
