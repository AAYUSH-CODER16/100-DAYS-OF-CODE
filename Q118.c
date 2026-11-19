#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    // Calculate the expected sum of numbers from 0 to n
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    
    // Calculate the actual sum of elements in the array
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    
    // The missing number is the difference between the expected and actual sum
    return expected_sum - actual_sum;
}

