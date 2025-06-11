#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(void) {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* value = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (value != NULL) {
        printf("Topilgan indexlar: [%d, %d]\n", value[0], value[1]);
        free(value);
    } else {
        printf("Mos keluvchi juftlik topilmadi.\n");
    }

    printf("Qaytarilgan o‘lcham: %d\n", returnSize);
    return 0;
}
