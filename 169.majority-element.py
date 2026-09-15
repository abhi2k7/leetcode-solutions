#
# @lc app=leetcode id=169 lang=python3
#
# [169] Majority Element
#

# @lc code=start
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        freq = {}
        for i in nums:
            freq[i] = freq.get(i,0) + 1
        for k, v in freq.items():
            if v > (n // 2):
                return k
# @lc code=end

