#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        printf("Not prime");
        return 0;
    }

    // Check divisibility from 2 to n/2
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0; // Not a prime number
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
