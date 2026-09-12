/*
 * @lc app=leetcode id=507 lang=cpp
 *
 * [507] Perfect Number
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        long temp = num , sm = 0;
        for(int i = 1;i < temp;i++){
            if(temp % i == 0){
                sm += i;
            }
        }
        return num == sm;
    }
};
// @lc code=end

