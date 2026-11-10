#
# @lc app=leetcode id=747 lang=python3
#
# [747] Largest Number At Least Twice of Others
#


# @lc code=start
class Solution:
    def dominantIndex(self, nums: list[int]) -> int:
        mx = max(nums)
        x = nums.index(mx)
        for i in range(len(nums)):
            if mx < (2 * nums[i]) and i != x:
                return -1
        return x


# @lc code=end
