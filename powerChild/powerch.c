typedef struct BoundedArray
{
    int size;
    int *arr;
}boundedarray;

struct boundedarray* ith_card_compare(int i, int cardDrawn, int** studentPair)
{
    boundedarray* z = (boundedarray*) malloc(sizeof(boundedarray));
    z->size = cardDrawn * 2 * 2;
    z->arr = (int *) malloc(z->size * sizeof(int)); 
    int p;
    int count = 0;
    for(p = 0; p < cardDrawn; p++)
    {
        if(p == i)
            {
                *(z->arr + count) = studentPair[p][0];
                *(z->arr + count + 1) = studentPair[p][1];
                count += 2;
                continue;
            }
        else{
            if(studentPair[i][0] == studentPair[p][0])
            {
                *(z->arr + count) = studentPair[p][0];
                *(z->arr + count + 1) = studentPair[p][1];
                count += 2;
            }
            if(studentPair[i][0] == studentPair[p][1])
            {
                *(z->arr + count) = studentPair[p][0];
                *(z->arr + count + 1) = studentPair[p][1];
                count += 2;
            }
            if(studentPair[i][1] == studentPair[p][0])
            {
                *(z->arr + count) = studentPair[p][0];
                *(z->arr + count + 1) = studentPair[p][1];
                count += 2;
            }
            if(studentPair[i][1] == studentPair[p][1])
            {
                *(z->arr + count) = studentPair[p][0];
                *(z->arr + count + 1) = studentPair[p][1];
                count += 2;
            }
        }
        *(z->arr + count) = -1;
    }
    return z;
}

void remove_repeat(*boundedarray z)
{
    int i;
    int j;
    for(i = 0; i < z->size; i++)
    {
        if(*(z->arr + i) < 0)
            break;
        for(j = 0; j < i; j++)
        {
            if(*(z->arr + i) == *(z->arr + j))
            {
                *(z->arr + i) = 0;
            }       
        }
    }
}

int calculateOnePower(*boundedarray z, int* strength)
{
    int i;
    int s = 0;
    for(i = 0; i < z->size; i++)
    {
        if(*(z->arr) < 0)
            break;
        if(*(z->arr) = 0)
            continue;
        s += *(strength + *(z->arr + i));
    }
    return s;
}


long calculatePower(int numOfKids, int cardDrawn, int** studentPair, int* strength)
{
    int i;
    long sums[cardDrawn] = {0};
    long max;
    for(i = 0; i < cardDrawn; i++)
    {
        boundedarray** x = (boundedarray*) malloc(sizeof(boundedarray));
        *(x + i) = ith_card_compare(i, cardDrawn, studentPair);
        remove_repeat(*(x + i));
    }

    for(i = 0; i < cardDrawn; i++)
    {
        sums[i] = calculateOnePower(*(x + i));
    }

    for(i = 0; i < cardDrawn; i++)
    {
        if(sums[i] >= max)
        {
            max = sums[i];
        }
    }
    return max;
}