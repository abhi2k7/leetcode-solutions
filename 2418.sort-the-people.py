#
# @lc app=leetcode id=2418 lang=python3
#
# [2418] Sort the People
#


# @lc code=start
class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        ans = []
        ppl = sorted(list(zip(names, heights)), key=lambda x: x[1], reverse=True)
        for i, j in ppl:
            ans.append(i)
        return ans


# @lc code=end
