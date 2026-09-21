#
# @lc app=leetcode id=2396 lang=python3
#
# [2396] Strictly Palindromic Number
#


# @lc code=start
class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:
        for i in range(2, n - 1):
            temp = n
            rem = ""
            while temp > 0:
                rem += str(temp % i)
                temp //= i
            if rem != rem[::-1]:
                return False
        return True


# @lc code=end
