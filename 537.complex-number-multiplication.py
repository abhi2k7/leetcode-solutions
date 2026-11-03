#
# @lc app=leetcode id=537 lang=python3
#
# [537] Complex Number Multiplication
#


# @lc code=start
class Solution:
    def complexNumberMultiply(self, p: str, q: str) -> str:
        p = p[:-1]
        q = q[:-1]
        index1 = -1
        index2 = -1
        for i in range(1, len(p)):
            if p[i] == "+" or p[i] == "-":
                index1 = i
                break
        for i in range(1, len(q)):
            if q[i] == "+" or q[i] == "-":
                index2 = i
                break
        a, b = int(p[:index1]), int(p[index1 + 1 :])
        c, d = int(q[:index2]), int(q[index2 + 1 :])
        rp = a * c - b * d
        ip = a * d + b * c
        return str(rp) + "+" + str(ip) + "i"


# @lc code=end
