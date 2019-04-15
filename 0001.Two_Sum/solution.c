/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
struct pair {
    int num;
    int idx;
};

int cmptr(void *lhs, void *rhs) {
    return ((struct pair *)lhs)->num - ((struct pair *)rhs)->num;
}

int* twoSum(int* nums, int numsSize, int target) {
    int *ans;
    int first = 0, second = numsSize-1;
    struct pair *list;
    list = (struct pair *) malloc(sizeof(struct pair) * numsSize);

    for(;first < numsSize; first++) {
        list[first].num = nums[first];
        list[first].idx = first;
    }
    first = 0;
        
    ans = (int*) malloc(sizeof(int)*2);
    
    qsort((void*)list, numsSize, sizeof(struct pair), cmptr);
    
    while(first < second) {
        int sum = list[first].num + list[second].num;
        if( sum == target) {
            ans[0] = list[first].idx;
            ans[1] = list[second].idx;
            break;
        }
        else if( sum > target ) {
            second--;
        }
        else {
            first++;
        }
    }
    free(list);
    return ans;
}

int main()
{
    int nums[] = {3,2,4};
    int *ret_array;
    
    ret_array = twoSum(nums, sizeof(nums)/sizeof(int), 6);
    printf("result = %d %d\n", ret_array[0], ret_array[1]);
    free(ret_array);

    return 0;
}