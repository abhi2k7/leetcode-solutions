/*
 * @lc app=leetcode id=2011 lang=cpp
 *
 * [2011] Final Value of Variable After Performing Operations
 */

// @lc code=start
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (string oper : operations){
            if (oper == "X++" || oper == "++X"){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};
// @lc code=end

