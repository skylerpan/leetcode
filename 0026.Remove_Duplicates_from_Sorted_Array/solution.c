#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(arr)    (sizeof(arr) / sizeof((arr)[0]))

int removeDuplicates(int* nums, int numsSize) {
    int ans_idx, chk_idx;

    if(nums == NULL || numsSize == 0)
        return 0;

    for(ans_idx = 0, chk_idx = ans_idx+1; chk_idx < numsSize; chk_idx++)
    {
        if(nums[ans_idx] != nums[chk_idx])
        {
            nums[++ans_idx] = nums[chk_idx];
        }
    }

    return ans_idx + 1;
}

int main(void)
{
    int nums[10] = {0,0,1,1,1,2,2,3,3,4};
    // nums is passed in by reference. (i.e., without making a copy)
    int len = removeDuplicates(nums, ARRAY_SIZE(nums));

    // any modification to nums in your function would be known by the caller.
    // using the length returned by your function, it prints the first len elements.
    for (int i = 0; i < len; i++) {
        printf("%d ",nums[i]);
    }
    return 0;
}