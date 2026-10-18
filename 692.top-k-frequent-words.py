#
# @lc app=leetcode id=692 lang=python3
#
# [692] Top K Frequent Words
#


# @lc code=start
class Solution:
    def topKFrequent(self, words: list[str], i: int) -> list[str]:
        freq = {}
        for word in words:
            freq[word] = freq.get(word, 0) + 1
        ans = []
        for k, v in sorted(freq.items(), key=lambda a: (-a[1], a[0])):
            ans.append(k)
        return ans[:i]


# @lc code=end
