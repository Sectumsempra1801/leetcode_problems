#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int total = nums1Size + nums2Size;
    int *sum = (int *)malloc(total * sizeof(double));
    int i = 0, j = 0;
    int k = 0;
    while (i < nums1Size && j < nums2Size)
    {

        if (nums1[i] < nums2[j])
        {
            sum[k] = nums1[i];
            i++;
            k++;
        }
        else
        {
            sum[k] = nums2[j];
            j++;
            k++;
        }
    }
    while (i < nums1Size)
    {
        sum[k] = nums1[i];
        i++;
        k++;
    }
    while (j < nums2Size)
    {
        sum[k] = nums2[j];
        j++;
        k++;
    }

    double ans;

    if (total % 2 == 1)
    {
        ans = sum[total / 2];
    }
    else
    {
        ans = (sum[total / 2] + sum[total / 2 - 1]) / 2.0;
    }
    free(sum);

    return ans;
}

// int main()
// {
//     int nums1[] = {1, 2}, nums2[] = {3, 4};

//     double ans = findMedianSortedArrays(nums1, sizeof(nums1) / sizeof(int), nums2, sizeof(nums2) / sizeof(int));

//     printf("%f\n", ans);
//     return 0;
// }