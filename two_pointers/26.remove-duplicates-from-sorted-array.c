/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int *nums, int numsSize)
{
    int i, j = 0;
    if (numsSize == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i < numsSize; i++)
        {
            if (nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }

        return j + 1;
    }
}
// @lc code=end
