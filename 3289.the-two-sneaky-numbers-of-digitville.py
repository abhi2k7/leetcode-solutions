#
# @lc app=leetcode id=3289 lang=python3
#
# [3289] The Two Sneaky Numbers of Digitville
#


# @lc code=start
class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        freq = {}
        result = []
        for i in nums:
            freq[i] = freq.get(i, 0) + 1
        for k, v in freq.items():
            if v == 2:
                result.append(k)
        return result


# @lc code=end
