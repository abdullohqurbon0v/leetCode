#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] >= target) {
            return i;
        }
    }
    return numsSize;
}

int main(void) {
    int nums[] = {1, 3, 3, 5};
    int target = 5;
    int value = searchInsert(nums, sizeof(nums) / sizeof(nums[0]), target);
    printf("%d\n", value);
    return 0;
}
