#
# @lc app=leetcode id=451 lang=python3
#
# [451] Sort Characters By Frequency
#


# @lc code=start
class Solution:
    def frequencySort(self, s: str) -> str:
        freq = {}
        solun = []
        for ch in s:
            freq[ch] = freq.get(ch, 0) + 1
        x = sorted(freq.items(), reverse=True, key=lambda a: a[1])
        for i, j in x:
            solun.extend([i] * j)
        return "".join(solun)


# @lc code=end
