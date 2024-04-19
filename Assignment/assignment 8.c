//given an unsorted array a of size N of non-negative integers, 
//find a continuous sub array which adds to a given number sum.

/* input:
    7
    [1,4,0,0,3,10,5]

    sum =7
    Output:
    Sum found between indexes 1 and 4
*/


#include <stdio.h>

void findSubarray(int arr[], int n, int targetSum) {
    int start = 0;
    int end = 0;
    int currentSum = arr[0];

    while (end < n) {
        if (currentSum == targetSum) {
            printf("Sum found between indexes %d and %d\n", start, end);
            return;
        } else if (currentSum < targetSum) {
            end++;
            if (end < n) {
                currentSum += arr[end];
            }
        } else {
            currentSum -= arr[start];
            start++;
        }
    }

    printf("No subarray found\n");
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

    int targetSum;
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    findSubarray(arr, n, targetSum);

    return 0;
}