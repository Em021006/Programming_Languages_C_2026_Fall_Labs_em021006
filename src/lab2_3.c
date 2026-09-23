#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {

    // TODO: check if n is prime using loop up to sqrt(n)
    if (n < 2) {
        return 0;
    }
    for (int j = 2; j*j <= n; j++) {
        if (n % j == 0) {
            return 0;
        }
    }    
    return 1;    
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf(" error enter an int number equal or greater than 2\n");
        return 1;
    }

    printf("prime numbers until %d is \n", n);
    for (int j = 2; j <= n; j++) {
        if (is_prime(j)) {
            printf("%d",j);
        }
    }
    // TODO: validate input and print all primes up to n
    return 0;
}
