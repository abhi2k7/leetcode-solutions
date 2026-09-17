#
# @lc app=leetcode id=3300 lang=python3
#
# [3300] Minimum Element After Replacement With Digit Sum
#


# @lc code=start
class Solution:
    def minElement(self, nums: List[int]) -> int:
        x = []
        for i in nums:
            temp, sm = i, 0
            while temp > 0:
                sm += temp % 10
                temp //= 10
            x.append(sm)
        return min(x)


# @lc code=end
