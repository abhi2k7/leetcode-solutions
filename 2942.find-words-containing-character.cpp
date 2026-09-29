/*
 * @lc app=leetcode id=2942 lang=cpp
 *
 * [2942] Find Words Containing Character
 */

// @lc code=start
class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> solun;
        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            for (int j = 0; j < word.length(); j++)
            {
                if (word[j] == x)
                {
                    solun.push_back(i);
                    break;
                }
            }
        }
        return solun;
    }
};
// @lc code=end
