#include <stdio.h>

fact() {
    int n;
    unsigned long long factorial = 1;  // Use unsigned long long to handle large factorials

    // Prompt the user to enter a number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    // Check if the input is a non-negative number
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial iteratively
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Output the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}


