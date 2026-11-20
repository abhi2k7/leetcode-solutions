#
# @lc app=leetcode id=3041 lang=python3
#
# [3041] Maximize Consecutive Elements in an Array After Modification
#


# @lc code=start
class Solution:
    def maxSelectedElements(self, nums: List[int]) -> int:
        nums.sort()
        ans = 1
        dp = {}
        for num in nums:
            a, b = 1, 1
            if num - 1 in dp:
                a = dp[num - 1] + 1
            if num in dp:
                b = dp[num] + 1
            dp[num] = max(dp.get(num, 0), a)
            dp[num + 1] = max(dp.get(num + 1, 0), b)
            ans = max(ans, max(dp[num], dp[num + 1]))
        return ans


# @lc code=end
