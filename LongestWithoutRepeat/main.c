#include <stdio.h>
//#include <malloc.h>
#include <string.h>
#include <stdlib.h>
//#include "LongestWithoutRepeat.h"

int lengthOfLongestSubstring(char* s)
{
    char * start = NULL;
    char * stop = NULL;
    int * addressTable[128] = {0};
    int i = 0;
    char * output = (char *)malloc(100 * sizeof(char));
    int len = 0;

    start = s;
    stop = s;

    while(*stop)
    {
        if(stop > addressTable[*stop] && addressTable[*stop] != 0)
        {
            len = stop - start;
            snprintf(output, len + 1, "%s\n", start);
            printf("%s\n", output);
            start = stop;
        }
        addressTable[*stop] = stop;
        stop++;
    }

    printf("%s", output);
}

int main() {
    char * start = "au";
    int len = 0;
//    printf("sizeof start: %d\n", strlen(start));
//    len = lengthOfLongestSubstring(start);
//    printf("%d\n", len);
    lengthOfLongestSubstring(start);
    return 0;
}