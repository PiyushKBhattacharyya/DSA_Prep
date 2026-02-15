/*
Permutations and Combinations
Generates all permutations of a string and combinations (subsets) of a given size.
*/

#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate all permutations of string str[l..r]
void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i)); // Backtrack
        }
    }
}

// Function to generate all combinations of size k from str[0..n-1]
void combinations(char *str, char *data, int start, int end, int index, int k) {
    // Current combination is ready, print it
    if (index == k) {
        data[index] = '\0';
        printf("%s\n", data);
        return;
    }

    // Replace index with all possible elements. The condition "end-i+1 >= k-index"
    // makes sure that including one element at index will make a combination 
    // with remaining elements at remaining positions
    for (int i = start; i <= end && end - i + 1 >= k - index; i++) {
        data[index] = str[i];
        combinations(str, data, i + 1, end, index + 1, k);
    }
}

int main() {
    char str[100];
    int k;

    printf("Enter a string for permutations: ");
    scanf("%s", str);
    printf("Permutations of %s:\n", str);
    permute(str, 0, strlen(str) - 1);

    printf("\nEnter a string for combinations: ");
    scanf("%s", str);
    printf("Enter combination size: ");
    scanf("%d", &k);

    char data[k + 1];
    printf("Combinations of %s of size %d:\n", str, k);
    combinations(str, data, 0, strlen(str) - 1, 0, k);

    return 0;
}
