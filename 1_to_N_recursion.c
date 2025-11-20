#include <stdio.h>

// Recursive function to print numbers from 1 to N
void printAscending(int n) {
    if (n == 0)
        return;  // Base case
    printAscending(n - 1);  // Recursive call first
    printf("%d ", n);    // Print after recursion  
}

int main() {
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Numbers from 1 to %d:\n", N);
    printAscending(N);

    return 0;
}
