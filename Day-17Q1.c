#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if Armstrong or not
    if ((int)result == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
