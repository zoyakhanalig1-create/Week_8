#include <stdio.h>

int main() {
    int num, digit, newNum = 0, place = 1;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        digit = (digit + 1) % 10; // add 1 and handle 9→0
        newNum = digit * place + newNum;
        num /= 10;
        place *= 10;
    }

    printf("New number: %d", newNum);
    return 0;
}
