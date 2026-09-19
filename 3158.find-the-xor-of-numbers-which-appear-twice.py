#
# @lc app=leetcode id=3158 lang=python3
#
# [3158] Find the XOR of Numbers Which Appear Twice
#


# @lc code=start
class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        freq = {}
        bitwise_xor = 0
        for i in nums:
            freq[i] = freq.get(i, 0) + 1
        for k, v in freq.items():
            if v == 2:
                bitwise_xor ^= k
        return bitwise_xor


# @lc code=end
