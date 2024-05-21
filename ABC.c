#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i * i;
        i++;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
