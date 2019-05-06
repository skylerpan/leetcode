int singleNumber(int* nums, int numsSize) {
    int i, single = 0;
    for(i = 0; i < numsSize; i++)
        single ^= nums[i];
    return single;
}