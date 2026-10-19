/*
 * @lc app=leetcode id=2089 lang=cpp
 *
 * [2089] Find Target Indices After Sorting Array
 */

// @lc code=start
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller = 0,equal = 0;
        for(int num:nums){
            if (num < target){
                smaller++;
            }
            else if(num == target){
                equal++;
            }
        }
        vector<int>indices;
        for(int i = smaller;i < smaller + equal;i++){
            indices.push_back(i);
        }
        return indices;
    }
};
// @lc code=end

