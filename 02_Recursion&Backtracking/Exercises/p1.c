/*
Tower of Hanoi Problem
*/

#include <stdio.h>

void ToH(int n, char frompeg, char topeg, char auxpeg) {
    // Base case
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", frompeg, topeg);
        return;
    }

    // Move n-1 disks from source to auxiliary
    ToH(n - 1, frompeg, auxpeg, topeg);

    // Move nth disk
    printf("Move disk %d from %c to %c\n", n, frompeg, topeg);

    // Move n-1 disks from auxiliary to destination
    ToH(n - 1, auxpeg, topeg, frompeg);
}

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    // A = Source, C = Destination, B = Auxiliary
    ToH(n, 'A', 'C', 'B');

    return 0;
}