#include <stdio.h>

void mergeSortedArrays(int nums1[], int m, int nums2[], int n) {
    int i = 0, j = 0;
    
    // Traverse both arrays and print the smaller element
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            printf("%d ", nums1[i]);
            i++;
        } else {
            printf("%d ", nums2[j]);
            j++;
        }
    }
    
    // Print any remaining elements from nums1
    while (i < m) {
        printf("%d ", nums1[i]);
        i++;
    }
    
    // Print any remaining elements from nums2
    while (j < n) {
        printf("%d ", nums2[j]);
        j++;
    }
    
    printf("\n");
}
