// Learning from Java's solution
int findDuplicate(int* nums, int numsSize) {
    int slow = nums[0];
    int quick = nums[0];
    do {
        slow  = nums[slow];
        quick = nums[nums[quick]];
    } while (slow != quick);

    // Find the "entrance" to the cycle.
    int ptr1 = nums[0];
    int ptr2 = slow;
    while (ptr1 != ptr2) {
        ptr1 = nums[ptr1];
        ptr2 = nums[ptr2];
    }

    return ptr1;
}