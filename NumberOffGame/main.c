#include <stdio.h>
#include "NumberOffGame.h"

int main() {
    char * output = (char *)malloc(500 * sizeof(char));
    NumberOffGame(6, output);
    printf("%s\n", output);
    return 0;
}