/*
 * @lc app=leetcode id=28 lang=c
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
int strStr(char *haystack, char *needle)
{
    int j = 0, hayLen, nedLen;
    hayLen = strlen(haystack);
    nedLen = strlen(needle);
    for (int i = 0; i < hayLen;)
    {
        if (haystack[i] == needle[j])
        {
            j++;
            i++;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
        if (j == nedLen)
        {
            return (i - j);
        }
    }
    return -1;
}
// @lc code=end
