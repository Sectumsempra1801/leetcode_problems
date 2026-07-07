/*
 * @lc app=leetcode id=66 lang=c
 *
 * [66] Plus One
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int pointPlus = 0;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            pointPlus++;
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            break;
        }
    }

    if (pointPlus < digitsSize)
    {
        *returnSize = digitsSize;
        return digits;
    }
    else
    {
        int *res = malloc((digitsSize + 1) * sizeof(int));
        res[0] = 1;
        for (int i = 1; i < digitsSize + 1; i++)
        {
            res[i] = 0;
        }

        *returnSize = digitsSize + 1;
        return res;
    }
}
// @lc code=end
