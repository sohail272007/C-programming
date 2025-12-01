#include <stdio.h>

// Recursive function
long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

// Iterative function
long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 0;
    }

    printf("Factorial of %d using recursion: %lld\n", n, factorialRecursive(n));
    printf("Factorial of %d using iteration: %lld\n", n, factorialIterative(n));

    return 0;
}
