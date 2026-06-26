/*
 * @lc app=leetcode id=11 lang=c
 *
 * [11] Container With Most Water
 */

// @lc code=start
int maxArea(int *height, int heightSize)
{
    int maxS = 0, calS, width, left = 0, right = heightSize - 1;
    while (left < right)
    {
        width = right - left;
        if ((height[left]) < height[right])
        {
            calS = height[left] * width;
            left++;
        }
        else
        {
            calS = height[right] * width;
            right--;
        }
        if (calS > maxS)
            maxS = calS;
    }
    return maxS;
}
// @lc code=end
