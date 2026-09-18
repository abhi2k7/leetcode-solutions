#
# @lc app=leetcode id=3731 lang=python3
#
# [3731] Find Missing Elements
#

# @lc code=start
class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        missing_items = []
        for i in range(min(nums),max(nums) + 1):
            if i not in nums:
                missing_items.append(i)
        return missing_items
# @lc code=end

