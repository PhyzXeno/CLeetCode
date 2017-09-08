#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "LongestWithoutRepeat.h"

int main() {
    char * start = "aab";
    int len = 0;

//    printf("sizeof start: %d\n", strlen(start));

    len = lengthOfLongestSubstring(start);
    printf("%d\n", len);

    return 0;
}