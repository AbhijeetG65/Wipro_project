#include <stdio.h>

int main() {
   int N;

   // Input N
   printf("Enter the value of N: ");
   scanf("%d", &N);

   int count = 1; // Initialize count to 1

   // Iterate over each row
   for (int i = 1; i <= N; i++) {
       // Print each number followed by a star
       for (int j = 1; j <= N; j++) {
           printf("%d", count++);
           if (j < N) {
               printf("*");
           }
       }
       printf("\n");
   }

   return 0;
}