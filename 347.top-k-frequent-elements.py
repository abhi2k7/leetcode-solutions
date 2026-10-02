#
# @lc app=leetcode id=347 lang=python3
#
# [347] Top K Frequent Elements
#


# @lc code=start
class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        freq = {}
        for i in nums:
            freq[i] = freq.get(i, 0) + 1
        solun = []
        for i, j in sorted(freq.items(), key=lambda x: x[1], reverse=True):
            solun.append(i)
        return solun[:k]


# @lc code=end
