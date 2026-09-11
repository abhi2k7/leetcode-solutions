/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp = x , rev = 0;
        while(temp > 0){
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }
        return x == rev;
    }
};
// @lc code=end

