/*
 * @lc app=leetcode id=3863 lang=cpp
 *
 * [3863] Minimum Operations to Sort a String
 */
class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if (is_sorted(s.begin(), s.end())) return 0;
        if (n == 2) return -1;

        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if (s[0] == mn || s[n - 1] == mx) return 1;

        bool minOnlyAtEnd = (count(s.begin(), s.end(), mn) == 1 && s[n - 1] == mn);
        bool maxOnlyAtStart = (count(s.begin(), s.end(), mx) == 1 && s[0] == mx);
        if (!(minOnlyAtEnd && maxOnlyAtStart)) return 2;

        return 3;
    }
};
// @lc code=end
