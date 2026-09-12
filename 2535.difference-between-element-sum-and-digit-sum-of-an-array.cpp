/*
 * @lc app=leetcode id=2535 lang=cpp
 *
 * [2535] Difference Between Element Sum and Digit Sum of an Array
 */

// @lc code=start
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long int arr_sm = 0, dig_sm = 0,diff;
        for(int i : nums){
            arr_sm += i;
            int temp = i;
            while (temp > 0){
                dig_sm += (temp % 10);
                temp /= 10;
            }
        }
        diff = abs(arr_sm - dig_sm);
        return diff;
    }
};
// @lc code=end

