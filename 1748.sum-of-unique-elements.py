#
# @lc app=leetcode id=1748 lang=python3
#
# [1748] Sum of Unique Elements
#

# @lc code=start
class Solution:
    def sumOfUnique(self, nums: list[int]) -> int:
        freq = {}
        for i in nums:
            freq[i] = freq.get(i,0) + 1
        sum = 0
        for i , j in freq.items():
            if j == 1:
                sum += i
        return sum
# @lc code=end

