#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    long long result = 1;
    for (int j = 1; j <= n; j++) {
        result *= j;  // we replace the + with a * for the multiplication
    }
    return result;
}

    // TODO: compute factorial iteratively

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("factorial doesnt work for negative numbers !\n");
        return 1;
    }
    long long result = factorial(n);
    printf("factorial %d = %d \n", n, result);
    // TODO: validate input, call function, print result

    return 0;
}
