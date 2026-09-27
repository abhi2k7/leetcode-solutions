#
# @lc app=leetcode id=1190 lang=python3
#
# [1190] Reverse Substrings Between Each Pair of Parentheses
#


# @lc code=start
class Solution:
    def reverseParentheses(self, s: str) -> str:
        n = len(s)
        pair, stack = {}, []
        for i, ch in enumerate(s):
            if ch == "(":
                stack.append(i)
            elif ch == ")":
                j = stack.pop()
                pair[j] = i
                pair[i] = j
        solution = []
        current = 0
        step = 1
        while current < n:
            if s[current] == "(" or s[current] == ")":
                current = pair[current]
                step = -step
            else:
                solution.append(s[current])
            current += step
        return "".join(solution)


# @lc code=end
