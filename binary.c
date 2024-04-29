/*

	This code take N number of decimal value and convert it into binary value.

*/
#include <stdio.h>

void decimal_to_binary(int num) {
    // Base case
    if (num <= 1) {
        printf("%d", num);
        return;
    }
    // Recursively call the function for the quotient
    decimal_to_binary(num / 2);
    // Print the remainder (binary digit)
    printf("%d", num % 2);
}

int main() {
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; // Return error code
    }

    // Loop through numbers from 0 to N and convert to binary
    for (int i = 0; i <= N; i++) {
        printf("Decimal %d: Binary ", i);
        decimal_to_binary(i);
        printf("\n");
    }

    return 0;
}
