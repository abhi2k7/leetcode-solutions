#
# @lc app=leetcode id=1859 lang=python3
#
# [1859] Sorting the Sentence
#


# @lc code=start
class Solution:
    def sortSentence(self, s: str) -> str:
        x = s.split()
        x.sort(key=lambda a: a[-1])
        ans = []
        for i in x:
            ans.append(i[: len(i) - 1])
        return " ".join(ans)


# @lc code=end
