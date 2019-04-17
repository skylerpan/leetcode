

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