#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("The sum of %d, %d, and %d is: %d\n", num1, num2, num3, sum);
    return 0;
}
