#
# @lc app=leetcode id=3498 lang=python3
#
# [3498] Reverse Degree of a String
#


# @lc code=start
class Solution:
    def reverseDegree(self, s: str) -> int:
        ascii_value = [i for i in range(26, 0, -1)]
        alphabets = [chr(i) for i in range(97, 123)]
        pair = dict(zip(alphabets, ascii_value))
        n = len(s)
        sm = 0
        for i in range(n):
            sm += pair[s[i]] * (i + 1)
        return sm


# @lc code=end
