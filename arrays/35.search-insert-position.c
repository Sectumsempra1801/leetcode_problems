/*
 * @lc app=leetcode id=35 lang=c
 *
 * [35] Search Insert Position
 */

// @lc code=start
int searchInsert(int *nums, int numsSize, int target)
{
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < target)
        {
            k++;
        }
    }
    return k;
}
// @lc code=end
