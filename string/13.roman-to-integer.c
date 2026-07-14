/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

// @lc code=start
int romanToInt(char *s)
{
    int curNum = 0, preNum = 0, totalVal = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        switch (s[i])
        {
        case 'I':
            curNum = 1;
            break;
        case 'V':
            curNum = 5;
            break;
        case 'X':
            curNum = 10;
            break;
        case 'L':
            curNum = 50;
            break;
        case 'C':
            curNum = 100;
            break;
        case 'D':
            curNum = 500;
            break;
        case 'M':
            curNum = 1000;
            break;
        default:
            break;
        }
        if (preNum >= curNum)
        {
            totalVal += curNum;
        }
        else
        {
            totalVal += curNum - 2 * preNum;
        }
        preNum = curNum;
    }
    return totalVal;
}
// @lc code=end
