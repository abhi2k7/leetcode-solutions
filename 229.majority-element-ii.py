#
# @lc app=leetcode id=229 lang=python3
#
# [229] Majority Element II
#


# @lc code=start
class Solution:
    def majorityElement(self, nums: list[int]) -> list[int]:
        n = len(nums)
        freq = {}
        result = []
        for i in nums:
            freq[i] = freq.get(i, 0) + 1
        for k, v in freq.items():
            if v > (n // 3):
                result.append(k)
        return result


# @lc code=end
