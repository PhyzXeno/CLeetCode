#include <stdio.h>
#include "NumberOffGame.h"

int main() {
    char * output = (char *)malloc(100 * sizeof(char));
    NumberOffGame(4, output);
    printf("%s\n", output);
    return 0;
}