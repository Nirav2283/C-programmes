#include <stdio.h>

int main() {
    int i = 1;
    int num;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter 10 numbers:\n");

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        i++;
    }

    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);

    return 0;
}

