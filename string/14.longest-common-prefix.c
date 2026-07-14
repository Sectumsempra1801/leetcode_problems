/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
char *longestCommonPrefix(char **strs, int strsSize)
{
    for (int i = 0; strs[0][i]; i++)
    {
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[0][i] != strs[j][i])
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}
// @lc code=end
