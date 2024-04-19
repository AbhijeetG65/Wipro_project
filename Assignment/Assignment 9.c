/* Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. 
Equilibrium position in an array is a position 
such that the sum of elements before it is equal to the sum of   elements after it

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 1]
3
[-7, 0, 0, 0, -4, 4, 0]
0
[0 0 0 0 -1]
4
Output:
3
*/


#include <stdio.h>

int findEquilibriumPosition(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Iterate through the array to find equilibrium position
    for (int i = 0; i < n; i++) {
        // Check if the current position is an equilibrium position
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i;  // Found equilibrium position
        }

        // Update left sum for the next iteration
        leftSum += arr[i];
    }

    // If no equilibrium position found
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

    int equilibriumIndex = findEquilibriumPosition(arr, n);
    if (equilibriumIndex != -1) {
        printf("Equilibrium position is at index %d\n", equilibriumIndex);
    } else {
        printf("No equilibrium position found\n");
    }

    return 0;
}