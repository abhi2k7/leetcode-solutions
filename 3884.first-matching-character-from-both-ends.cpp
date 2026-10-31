/*
 * @lc app=leetcode id=3884 lang=cpp
 *
 * [3884] First Matching Character From Both Ends
 */

// @lc code=start
class Solution {
public:
    int firstMatchingIndex(string s) {
        for(int i = 0;i<s.length();i++){
            if(s[i] == s[s.length() - i - 1]){
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

