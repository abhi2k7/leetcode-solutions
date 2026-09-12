#
# @lc app=leetcode id=3280 lang=python3
#
# [3280] Convert Date to Binary
#

# @lc code=start
class Solution:
    def convertDateToBinary(self, date: str) -> str:
        year, month, date = date.split('-')
        year_bin , month_bin , date_bin = bin(int(year))[2:] , bin(int(month))[2:] , bin(int(date))[2:]
        return year_bin + '-' + month_bin + '-' + date_bin
# @lc code=end

