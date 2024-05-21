#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 127) {
        printf("Character: %c, ASCII Value: %d\n", i, i);
        i++;
    }

    return 0;
}
