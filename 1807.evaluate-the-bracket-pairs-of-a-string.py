#
# @lc app=leetcode id=1807 lang=python3
#
# [1807] Evaluate the Bracket Pairs of a String
#


# @lc code=start
class Solution:
    def evaluate(self, s: str, knowledge: list[list[str]]) -> str:
        data = dict(knowledge)
        s = re.sub(r"\((.*?)\)", lambda x: data.get(x.group(1), "?"), s)
        return s


# @lc code=end
