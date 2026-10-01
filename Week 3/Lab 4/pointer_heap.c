#include <stdio.h>
#include <stdlib.h>

int main() {
    int *forheap; // Declare pointer (lives on STACK)

    forheap = (int *)malloc(sizeof(int)); // Allocate memory on HEAP
    *forheap = 30; // Store value in allocated memory

    // Print addresses
    printf("Address of pointer (STACK): %p\n", (void *)&forheap);
    printf("Address of data (HEAP): %p\n", (void *)forheap);
    printf("Value stored: %d\n", *forheap);

    free(forheap);

    return 0;
}
