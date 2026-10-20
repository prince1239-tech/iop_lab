
	#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
        }
    }

    if (n <= 1) {
        isPrime = 0;
    }

    if (isPrime == 1)
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    return 0;
}
