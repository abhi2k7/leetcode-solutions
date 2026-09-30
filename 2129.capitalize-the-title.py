#
# @lc app=leetcode id=2129 lang=python3
#
# [2129] Capitalize the Title
#


# @lc code=start
class Solution:
    def capitalizeTitle(self, title: str) -> str:
        solun = title.split()

        for i in range(len(solun)):
            if 1 <= len(solun[i]) <= 2:
                solun[i] = solun[i].lower()
            else:
                solun[i] = solun[i].lower()
                solun[i] = solun[i].capitalize()
        return " ".join(solun)


# @lc code=end
