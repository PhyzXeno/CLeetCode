#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* longestCommonPrefix(char** strs, int strsSize)
{
    if(strsSize <= 0)
        return "";
    if(strsSize == 1)
        return strs[0];

    int len0 = strlen(strs[0]);
    char * a = (char *)malloc(sizeof(char) * (len0 + 1));
    int i, j;


    strncpy(a, strs[0], len0);
    a[len0] = '\0';
    for(i = 1; i < strsSize; i++)
    {
        int mark = 0;
        for(j = 0; j < len0; j++)
        {
            if(a[j] == strs[i][j])
                mark++;
            else
            {
                a[j] = '\0';
                break;
            }
        }
        if(mark == 0)
            return "";

        if(mark < len0)
            len0 = mark;
    }

    return a;
}

int main() {
    char* strs[] = {"aa", "a"};
    char* a = NULL;
    a = longestCommonPrefix(strs, 2);
    printf("%s", a);
//    printf("%s\n", strs[20]);
    return 0;
}