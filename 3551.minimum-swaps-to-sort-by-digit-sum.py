#
# @lc app=leetcode id=3551 lang=python3
#
# [3551] Minimum Swaps to Sort by Digit Sum
#


# @lc code=start
class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        solun = []
        cnt = 0
        for i, num in enumerate(nums):
            temp = num
            sum = 0
            while temp > 0:
                sum += temp % 10
                temp //= 10
            solun.append((sum, num, i))
        solun.sort()
        x = [False] * len(nums)
        for i in range(len(solun)):
            if x[i] or solun[i][2] == i:
                continue
            j = i
            swap = 0
            while not x[j]:
                x[j] = True
                j = solun[j][2]
                swap += 1
            cnt += swap - 1
        return cnt


# @lc code=end
