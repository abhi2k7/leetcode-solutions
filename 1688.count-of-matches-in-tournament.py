#
# @lc app=leetcode id=1688 lang=python3
#
# [1688] Count of Matches in Tournament
#


# @lc code=start
class Solution:
    def numberOfMatches(self, n: int) -> int:
        temp = n
        num_matches = 0
        winner = 0
        while temp > 0 and winner != 1:
            if temp % 2 == 0:
                num_matches += temp // 2
                winner = temp // 2
                temp //= 2
            else:
                num_matches += (temp - 1) // 2
                winner = (temp - 1) // 2 + 1
                temp = (temp - 1) // 2 + 1
        return num_matches


# @lc code=end
