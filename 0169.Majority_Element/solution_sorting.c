int cmp(void *lhs, void *rhs)
{
    return (*(int*)lhs - *(int*)rhs);
}

#if 1
int majorityElement(int* nums, int numsSize)
{

    if(numsSize == 0)
        return NULL;

    qsort(nums, numsSize, sizeof(int), cmp);

    return nums[numsSize/2];
}

#else
int majorityElement(int* nums, int numsSize)
{
    int thrd = numsSize/2;
    int i, d = 0 , ans = nums[0];

    if(numsSize == 0)
        return NULL;

    qsort(nums, numsSize, sizeof(int), cmp);

    for(i = 0; i < numsSize; i++)
    {
        if(nums[d] != nums[i])
        {
            d = i;
        }
        else
        {
            if(i - d >= thrd)
            {
                ans = nums[d];
                break;
            }
        }
    }
    return ans;
}
#endif