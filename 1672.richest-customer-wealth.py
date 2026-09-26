#
# @lc app=leetcode id=1672 lang=python3
#
# [1672] Richest Customer Wealth
#


# @lc code=start
class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        mx = 0
        for acc in accounts:
            sm = sum(acc)
            if sm > mx:
                mx = sm
        return mx


# @lc code=end
