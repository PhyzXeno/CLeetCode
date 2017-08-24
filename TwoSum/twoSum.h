//
// Created by Lin on 2017/8/24.
//

#include <malloc.h>

#ifndef TWOSUM_TWOSUM_H
#define TWOSUM_TWOSUM_H

#endif //TWOSUM_TWOSUM_H

int* twoSum(int* nums, int numsSize, int target) {
    int i, j, sum;
    for(i = 0; i < numsSize-1; i++)
    {
        for(j = i+1; j < numsSize; j++)
        {
            sum = nums[i] + nums[j];
            if (target == sum)
            {
                int* result = malloc(sizeof(int)*2);
                result[0] = i;
                result[1] = j;
                return result;
            }
            continue;
        }
    }
    return 0;
}