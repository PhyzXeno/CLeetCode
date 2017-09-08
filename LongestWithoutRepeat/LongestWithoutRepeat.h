#include <stdio.h>
#include <malloc.h>
#include <string.h>

#ifndef LONGESTWITHOUTREPEAT_LONGESTWITHOUTREPEAT_H
#define LONGESTWITHOUTREPEAT_LONGESTWITHOUTREPEAT_H

#endif //LONGESTWITHOUTREPEAT_LONGESTWITHOUTREPEAT_H

int lengthOfLongestSubstring(char* s)
{
    unsigned int addressTable[128] = {0};
    char * start = NULL;
    char * stop = NULL;
    char * tempStart = NULL;
    unsigned int len = 0;
    char * output = (char *)malloc(100 * sizeof(char));

    start = s;
    stop = s;

    if(strlen(s) == 1)
        return 1;

    while(*stop)
    {
        if((unsigned int)stop > addressTable[*stop] && addressTable[*stop] != 0)
        {
            if((unsigned int)(stop - start) >= len)
            {
                len = (unsigned int)(stop - start);
//                snprintf(output, len + 1, "%s", start);
//                printf("%s", output);
                tempStart = start;
                start = stop;
            }
        }
        addressTable[*stop] = (unsigned int)stop;
        stop++;
    }
    if(len == 0)
    {
        len = (unsigned int)(stop - start);
        tempStart = start;
    }

    snprintf(output, len + 1, "%s", tempStart);
    printf("%s", output);
}