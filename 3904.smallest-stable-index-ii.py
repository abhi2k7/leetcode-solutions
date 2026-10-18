#
# @lc app=leetcode id=3904 lang=python3
#
# [3904] Smallest Stable Index II
#


# @lc code=start
class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        arr = [0] * len(nums)
        arr[-1] = nums[-1]
        for i in range(len(nums) - 2, -1, -1):
            arr[i] = min(nums[i], arr[i + 1])
        mx = nums[0]
        for i in range(len(nums)):
            mx = max(mx, nums[i])
            score = mx - arr[i]
            if score <= k:
                return i
        return -1


# @lc code=end
