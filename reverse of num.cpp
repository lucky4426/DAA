#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    return reversed;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Reversed number: %d\n", reverseNumber(number));
    return 0;
}

