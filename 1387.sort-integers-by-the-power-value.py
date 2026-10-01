#
# @lc app=leetcode id=1387 lang=python3
#
# [1387] Sort Integers by The Power Value
#


# @lc code=start
class Solution:
    def getKth(self, lo: int, hi: int, k: int) -> int:
        solun = []
        for j in range(lo, hi + 1):
            i = j
            cnt = 0
            while i != 1:
                if i % 2 == 0:
                    i //= 2
                else:
                    i = (3 * i) + 1
                cnt += 1
            solun.append((cnt, j))
        solun.sort()
        return solun[k - 1][1]


# @lc code=end
