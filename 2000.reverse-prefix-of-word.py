#
# @lc app=leetcode id=2000 lang=python3
#
# [2000] Reverse Prefix of Word
#


# @lc code=start
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        if ch in word:
            k = word.index(ch)
            return word[: k + 1][::-1] + word[k + 1 :]
        else:
            return word


# @lc code=end
