//
// Created by phyzx on 2017/8/25.
//

#ifndef LONGESTWITHOUTREPEAT_LONGESTWITHOUTREPEAT_H
#define LONGESTWITHOUTREPEAT_LONGESTWITHOUTREPEAT_H

#endif //LONGESTWITHOUTREPEAT_LONGESTWITHOUTREPEAT_H

int lengthOfLongestSubstring(char* s) {
    char* end = s;
    char* temp = NULL;
    char* addressTable[128] = {NULL};
    int len = 0;

    while(*end)
    {
        temp = addressTable[*end];
        addressTable[*end] = end;

        if(temp >= s)
        {
            len = end - s > len ? end - s : len;
            s = temp + 1;
        }
        end++;
    }
    len = end - s > len ? end - s : len;
    return len;
}

