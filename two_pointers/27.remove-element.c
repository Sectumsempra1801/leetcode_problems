/*
 * @lc app=leetcode id=27 lang=c
 *
 * [27] Remove Element
 */

// @lc code=start
int removeElement(int *nums, int numsSize, int val)
{
    int i, j;
    if (numsSize == 1)
    {
        if (nums[0] == val)
            return 0;
        else
            return 1;
    }
    else
    {
        j = 0;
        for (i = 0; i < numsSize; i++)
        {
            if (nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
}
// @lc code=end
