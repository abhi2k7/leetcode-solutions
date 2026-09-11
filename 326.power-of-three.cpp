/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        int temp = n;
        while (temp > 0 && temp % 3 == 0){
            temp /= 3;
        }
        return temp == 1;
    }
};
// @lc code=end

