#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32], i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    if (decimalNumber == 0)
        printf("0\n");
    else
        decimalToBinary(decimalNumber);
    return 0;
}
