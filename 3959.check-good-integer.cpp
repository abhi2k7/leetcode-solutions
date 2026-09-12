/*
 * @lc app=leetcode id=3959 lang=cpp
 *
 * [3959] Check Good Integer
 */

// @lc code=start
class Solution {
public:
    bool checkGoodInteger(int n) {
        long int temp = n,sqr = 0,sm = 0;
        while(temp > 0){
            sqr += pow((temp % 10),2);
            sm += (temp % 10);
            temp /= 10;
        }
        return (sqr - sm) >= 50;
    }
};
// @lc code=end

