/*
 * @lc app=leetcode id=2520 lang=cpp
 *
 * [2520] Count the Digits That Divide a Number
 */

// @lc code=start
class Solution {
public:
    int countDigits(int num) {
        int temp = num,cnt = 0;
        while(temp > 0){
            int digit = temp  % 10;
            if(num % digit == 0){
                cnt += 1;
            }
            temp /= 10;
        }
        return cnt;

    }
};
// @lc code=end

