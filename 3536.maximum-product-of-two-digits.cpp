/*
 * @lc app=leetcode id=3536 lang=cpp
 *
 * [3536] Maximum Product of Two Digits
 */

// @lc code=start
class Solution {
public:
    int maxProduct(int n) {
        int mx1 = 0,mx2 = 0;
        int temp = n;
        while (temp > 0){
            int dig = temp % 10;
            if (dig > mx1){
                mx2 = mx1;
                mx1 = dig;
            }
            else if(dig > mx2){
                mx2 = dig;
            }
            temp /= 10;
        }
        return mx1 * mx2;
    }
};
// @lc code=end

