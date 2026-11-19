#include <stdio.h>

// Define a reasonable maximum value for the hash array based on expected input constraints
#define MAX_VAL 10000 

int findRepeated(int arr[], int n) {
    // Array to keep track of visited elements, initialized to 0 (false)
    int visited[MAX_VAL] = {0};
    
    for (int i = 0; i < n; i++) {
        // If the element has already been seen, it's the repeated one
        if (visited[arr[i]] == 1) {
            return arr[i];
        }
        // Otherwise, mark it as seen
        visited[arr[i]] = 1;
    }
    
    return -1; // Fallback in case no repeating element is found
}

