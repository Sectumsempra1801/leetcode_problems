/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;

    int i, j = 1;
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
// @lc code=end
