#
# @lc app=leetcode id=125 lang=python3
#
# [125] Valid Palindrome
#

# @lc code=start
class Solution:
    def isPalindrome(self, s: str) -> bool:
        solun = [i.lower() for i in s if i.isalnum()]
        return "".join(solun) == "".join(solun)[::-1]
# @lc code=end

