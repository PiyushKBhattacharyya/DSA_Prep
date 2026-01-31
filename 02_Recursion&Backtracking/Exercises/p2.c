/*
Generate all strings of n bits
Assume A[0..n - 1] is an array of size n
*/

#include <stdio.h>

int A[20];   // Global array to store bits

void binary(int n) {
    if (n < 1) 
        printf("%d\n", A);
    else {
        A[n - 1] = 0;
        binary(n - 1);

        A[n - 1] = 1;
        binary(n - 1);
    }
}

int main() {
    int n;
    printf("Enter number of bits: ");
    scanf("%d", &n);

    binary(n);
    return 0;
}