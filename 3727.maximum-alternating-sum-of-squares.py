#
# @lc app=leetcode id=3727 lang=python3
#
# [3727] Maximum Alternating Sum of Squares
#


# @lc code=start
class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        solun = 0
        n = len(nums)
        nums.sort(key=abs)
        for i in range(n):
            sq = nums[i] ** 2
            if i < (n // 2):
                solun -= sq
            else:
                solun += sq
        return solun


# @lc code=end
