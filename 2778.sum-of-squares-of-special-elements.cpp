/*
 * @lc app=leetcode id=2778 lang=cpp
 *
 * [2778] Sum of Squares of Special Elements 
 */

// @lc code=start
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size() , ans = nums[0] * nums[0];
        for(int i = 1; i < n;i++){
            if(n % (i + 1) == 0){
                ans += pow(nums[i],2);
            }
        }
        return ans;
    }
};
// @lc code=end

