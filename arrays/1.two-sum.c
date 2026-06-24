#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] > target)
            break;
        else
        {
            for (int j = i + 1; j < numsSize; j++)
            {
                if (nums[j] > target)
                    break;
                else if (nums[i] + nums[j] == target)
                {
                    int *result = malloc(2 * sizeof(int));

                    result[0] = i;
                    result[1] = j;

                    *returnSize = 2;
                    return result;
                }
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
int main()
{
    int nums[] = {2, 7, 11, 15, 17, 19, 22, 40, 41};
    int returnSize;

    int *ans = twoSum(nums, sizeof(nums) / sizeof(int), 136, &returnSize);

    printf("[%d, %d]\n", ans[0], ans[1]);
    free(ans);
    return 0;
}