#include <stdio.h>
#include "twoSum.h"

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(int);
    void *result = malloc(numsSize * sizeof(int));
    result = twoSum(nums, numsSize, target);
    printf("[%d, %d]", *((int *) result), *((int *) result + 1));
}