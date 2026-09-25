#
# @lc app=leetcode id=2185 lang=python3
#
# [2185] Counting Words With a Given Prefix
#

# @lc code=start
class Solution:
    def prefixCount(self, words: list[str], pref: str) -> int:
        step = 0
        for word in words:
            if word.startswith(pref):
                step += 1
        return step
# @lc code=end

