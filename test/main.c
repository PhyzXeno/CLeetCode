#include <stdio.h>
#include <malloc.h>

int EveryMSetZero(int m, int *index, int next)
{
    int i = 0;
    int count = 0;
    int len = _msize(index) / sizeof(int);
    int maxIndex = len - 1;
    int notZeroNum = 0;

    for(i = 0; i < len; i++)
    {
        if(index[i] == 0)
            continue;
        notZeroNum++;
    }

    if(notZeroNum < m)
    {
        return -1;
    }

    for(i = next; i < (len + next); i++)
    {
        count++;
        if(count == m)
        {
            index[i % maxIndex] = 0;
            count = 0;
            next = (i % maxIndex) + 1;
        }
    }
    return next;
}

void NumberOffGame(int m)
{
    int i = 0;
    int count = 0;
    int len = 0;
    int next = 0;
    int *index = (int *)malloc(100 * sizeof(int));

    if(m <= 1 || m >= 100)
    {
        printf("ERROR!\n");
    }

    for(i = 0; i < 100; i++)
    {
        index[i] = i + 1;
    }

    while(1)
    {
        next = EveryMSetZero(m, index, next);
        if(next < 0)
            break;
    }

    for(i = 0; i < len; i++)
        printf("%d,", index[i]);
}

int main() {
    int m = 3;
    NumberOffGame(m);
    return 0;
}