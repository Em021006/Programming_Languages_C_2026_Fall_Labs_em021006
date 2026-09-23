#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    int total = 0; // we initialize the variable for the sum
    for (int j = 1; j <= n; j++) { // we start with j = 1, if j is below n we can continue and increment j 
        total += j; // we define the total 
    }
    return total; 
}
    // TODO: implement sum with a for loop

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error the number is below 1 !");
    }
    else {
        int result = sum_to_n(n); 
        printf(" the result of the sum from 1 to %d is %d\n", n, result);
    }
    // TODO: validate input, call function, and print result
    return 0;
}
