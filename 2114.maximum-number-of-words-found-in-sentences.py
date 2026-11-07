#
# @lc app=leetcode id=2114 lang=python3
#
# [2114] Maximum Number of Words Found in Sentences
#


# @lc code=start
class Solution:
    def mostWordsFound(self, sentences: list[str]) -> int:
        mx = -1
        for sentence in sentences:
            mx = max(mx, len(sentence.split()))
        return mx


# @lc code=end
