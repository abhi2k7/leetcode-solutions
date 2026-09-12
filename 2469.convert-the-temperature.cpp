/*
 * @lc app=leetcode id=2469 lang=cpp
 *
 * [2469] Convert the Temperature
 */

// @lc code=start
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> temp;
        double kelvin = celsius + 273.15;
        double Farenheit = celsius * 1.80 + 32.00;
        temp.push_back(kelvin);
        temp.push_back(Farenheit);
        return temp;
    }
};
// @lc code=end
