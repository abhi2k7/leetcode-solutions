/*
 * @lc app=leetcode id=3622 lang=cpp
 *
 * [3622] Check Divisibility by Digit Sum and Product
 */

// @lc code=start
class Solution {
public:
    bool checkDivisibility(int n) {
        long int temp = n, prd = 1,sm = 0,sum;
        while(temp > 0){
            prd *= (temp % 10);
            sm += (temp % 10);
            temp /= 10;
        } 
        sum = sm + prd;
        return n % sum == 0;
    }
};
// @lc code=end

