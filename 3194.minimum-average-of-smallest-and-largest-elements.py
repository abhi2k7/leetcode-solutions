#
# @lc app=leetcode id=3194 lang=python3
#
# [3194] Minimum Average of Smallest and Largest Elements
#


# @lc code=start
class Solution:
    def minimumAverage(self, nums: List[int]) -> float:
        nums.sort()
        avrgs = []
        n = len(nums)
        while nums:
            avrg = (nums[0] + nums[-1]) / 2
            avrgs.append(avrg)
            nums.pop(0)
            nums.pop()
        return min(avrgs)


# @lc code=end
