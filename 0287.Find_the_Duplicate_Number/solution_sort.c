int cmptr(void *lhs, void *rhs) {
    return *(int*)lhs - *(int*)rhs;
}

int findDuplicate(int* nums, int numsSize) {
    int i;

    qsort((void*)nums, numsSize, sizeof(int), cmptr);

    for(i = 0; i < numsSize-1; i++)
    {
        if(nums[i] == nums[i+1])
            return nums[i];
    }
    return nums[i];
}