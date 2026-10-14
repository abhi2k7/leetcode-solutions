#
# @lc app=leetcode id=2267 lang=python3
#
# [2267]  Check if There Is a Valid Parentheses String Path
#


# @lc code=start
class Solution:
    def hasValidPath(self, grid: list[list[str]]) -> bool:
        m, n = len(grid), len(grid[0])

        if (m + n) % 2 == 0:
            return False

        memo = {}

        def dfs(i, j, balance):
            if grid[i][j] == "(":
                balance += 1
            else:
                balance -= 1

            if balance < 0:
                return False

            remaining = (m - 1 - i) + (n - 1 - j)

            if balance > remaining:
                return False

            if i == m - 1 and j == n - 1:
                return balance == 0

            state = (i, j, balance)
            if state in memo:
                return memo[state]

            ans = False

            if i + 1 < m:
                ans = dfs(i + 1, j, balance)

            if not ans and j + 1 < n:
                ans = dfs(i, j + 1, balance)

            memo[state] = ans
            return ans

        return dfs(0, 0, 0)


# @lc code=end
