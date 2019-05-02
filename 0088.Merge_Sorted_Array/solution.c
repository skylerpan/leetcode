int cmp(void *lhs, void *rhs)
{
    return *(int*)lhs - *(int*)rhs;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i;
    
    for(i = 0; i < n ; i++)
    {
        nums1[i+m] = nums2[i];
    }
    
    qsort(nums1, n + m, sizeof(int), cmp);
}

