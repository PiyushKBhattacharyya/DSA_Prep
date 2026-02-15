/*
Subset Sum Problem
Finds all subsets of a given set that sum up to a specific target value.
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// Function to print a subset
void printSubset(int subset[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

// Recursive function to find subsets with sum equal to target
void subsetSum(int set[], int subset[], int n, int subSize, int total, int nodeIndex, int target) {
    if (total == target) {
        // Print the current subset
        printSubset(subset, subSize);
        
        // Continue to find other subsets if we want all of them
        // Even if we found a solution, there might be 0s in the set if allowed
        if (nodeIndex < n && total + set[nodeIndex] <= target) {
            subsetSum(set, subset, n, subSize, total, nodeIndex + 1, target);
        }
        return;
    } else {
        // Find subsets by including/excluding elements
        for (int i = nodeIndex; i < n; i++) {
            if (total + set[i] <= target) {
                // Include the current element
                subset[subSize] = set[i];
                subsetSum(set, subset, n, subSize + 1, total + set[i], i + 1, target);
            }
        }
    }
}

int main() {
    int n, target;
    int set[MAX];
    int subset[MAX];

    printf("Enter number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Subsets with sum %d:\n", target);
    subsetSum(set, subset, n, 0, 0, 0, target);

    return 0;
}
