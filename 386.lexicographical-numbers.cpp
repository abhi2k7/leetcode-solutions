/*
 * @lc app=leetcode id=386 lang=cpp
 *
 * [386] Lexicographical Numbers
 */

// @lc code=start
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>solun;
        int curr = 1;
        for(int i = 0;i<n;i++){
            solun.push_back(curr);
            if(curr * 10 <= n){
                curr *= 10;
            }
            else{
                while (curr % 10 == 9 || curr + 1 > n){
                    curr /= 10;
                }
                curr += 1;
            }
        }
        return solun;
    }
};
// @lc code=end

