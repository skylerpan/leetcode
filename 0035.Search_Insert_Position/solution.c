#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *searchInsert_r(int* nums, int numsSize, int target)
{
    if(numsSize <= 1){
        if(target <= nums[0])
            return &nums[0];
        else
            return &nums[1];
    }

    if(target < nums[numsSize/2]) {
        return searchInsert_r(nums, numsSize/2, target);
    }
    else if(target > nums[numsSize/2])
    {
        int n = numsSize % 2 == 0 ? numsSize/2 : numsSize/2 + 1;
        return searchInsert_r(&nums[numsSize/2] , n , target);
    }
    else
        return &nums[numsSize/2];
}
int searchInsert(int* nums, int numsSize, int target) {
    int *res_ptr =  searchInsert_r(nums, numsSize, target);
    return (res_ptr - nums);
}

int main()
{
    int nums[] = {1};
    int target = 1;
    
    printf("Insert position=%d\n", searchInsert(nums, sizeof(nums)/sizeof(int), target));

    return 0;
}