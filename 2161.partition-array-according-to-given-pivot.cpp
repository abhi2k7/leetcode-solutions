/*
 * @lc app=leetcode id=2161 lang=cpp
 *
 * [2161] Partition Array According to Given Pivot
 */

// @lc code=start
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>x1;
        x1.reverse(nums.size());
        for(int num:nums){
            if (num < pivot){x1.push_back(num);}
        }
        for(int num:nums){
            if (num == pivot){x1.push_back(num);}
        }
        for(int num:nums){
            if (num > pivot){x1.push_back(num);}
        }

        return x1;
    }
};
// @lc code=end

