/*
Given an unsorted array of integers. Find an element such that all the elements 
to its left are smaller and to its right are greater. Print -1 if no such element exists.

Examples :

Input :  A[] = {4, 3, 2, 5, 8, 6, 7}  
Output : 5

Input : A[] = {5, 6, 2, 8, 10, 9, 8}
Output : -1
*/


#include <stdio.h>
#include <limits.h>

int findPartitionPoint(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        int leftMax = INT_MIN;
        int rightMin = INT_MAX;

        // Check if all elements to the left are smaller
        for (int j = 0; j < i; j++) {
            if (arr[j] > leftMax) {
                leftMax = arr[j];
            }
        }

        // Check if all elements to the right are greater
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < rightMin) {
                rightMin = arr[j];
            }
        }

        // Check if the current element satisfies the condition
        if (arr[i] > leftMax && arr[i] < rightMin) {
            return arr[i];  // Found partition point
        }
    }

    // If no partition point found
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int partitionPoint = findPartitionPoint(arr, n);
    if (partitionPoint != -1) {
        printf("Partition point in the array: %d\n", partitionPoint);
    } else {
        printf("No partition point found in the array\n");
    }

    return 0;
}