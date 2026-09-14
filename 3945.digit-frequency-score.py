#
# @lc app=leetcode id=3945 lang=python3
#
# [3945] Digit Frequency Score
#


# @lc code=start
class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        nums = [int(i) for i in str(n)]
        result = []
        freq = {}
        for i in nums:
            freq[i] = freq.get(i, 0) + 1
        for i, j in freq.items():
            result.append(i * j)
        return sum(result)


# @lc code=end
