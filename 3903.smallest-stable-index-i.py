#
# @lc app=leetcode id=3903 lang=python3
#
# [3903] Smallest Stable Index I
#


# @lc code=start
class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        for i in range(len(nums)):
            if max(nums[: i + 1]) - min(nums[i:]) <= k:
                return i
        return -1


# @lc code=end
