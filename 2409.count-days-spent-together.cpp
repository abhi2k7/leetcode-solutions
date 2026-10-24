/*
 * @lc app=leetcode id=2409 lang=cpp
 *
 * [2409] Count Days Spent Together
 */

// @lc code=start
class Solution
{
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
    {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto convert = [&](string date)
        {
            int month = stoi(date.substr(0, 2));
            int day = stoi(date.substr(3, 2));
            int total = day;
            for (int i = 0; i < month - 1; i++)
            {
                total += days[i];
            }
            return total;
        };
        int st = max(convert(arriveAlice), convert(arriveBob));
        int end = min(convert(leaveAlice), convert(leaveBob));
        return max(0, end - st + 1);
    }
};
// @lc code=end
