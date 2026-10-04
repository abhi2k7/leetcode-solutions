#
# @lc app=leetcode id=3986 lang=python3
#
# [3986] Number of Elapsed Seconds Between Two Times
#


# @lc code=start
class Solution:
    def secondsBetweenTimes(self, startTime: str, endTime: str) -> int:
        hr1, mn1, s1 = map(int, startTime.split(":"))
        hr2, mn2, s2 = map(int, endTime.split(":"))
        start = hr1 * 3600 + mn1 * 60 + s1
        end = hr2 * 3600 + mn2 * 60 + s2
        return end - start


# @lc code=end
