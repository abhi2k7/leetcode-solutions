#
# @lc app=leetcode id=1882 lang=python3
#
# [1882] Process Tasks Using Servers
#


# @lc code=start
class Solution:
    def assignTasks(self, servers: list[int], tasks: list[int]) -> list[int]:
        v = [(w, i) for i, w in enumerate(servers)]
        heapify(v)
        a, b = [], []
        for s, t in enumerate(tasks):
            while b and b[0][0] <= s:
                heappush(v, heappop(b)[1:])
            s, w, i = (s, *heappop(v)) if v else heappop(b)
            heappush(b, (s + t, w, i))
            a.append(i)
        return a


# @lc code=end
