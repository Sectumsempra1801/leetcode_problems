/*
 * @lc app=leetcode id=58 lang=c
 *
 * [58] Length of Last Word
 */

// @lc code=start
int lengthOfLastWord(char *s)
{
    int cnt = 0, sLen = strlen(s) - 1;
    for (int i = sLen; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            cnt++;
        }
        else
        {
            if (cnt != 0)
            {
                return cnt;
            }
        }
    }
    return cnt;
}
// @lc code=end
