#include <stdio.h>

int main() {
int arr[5];
int i, maximum, minimum;
 printf("Enter 5 numbers:\n");
 for(i = 0; i < 5; i++) {
 scanf("%d", &arr[i]);
 }
 maximum = arr[0];
 for(i = 1; i < 5; i++) {
 if(arr[i] > maximum) {
 maximum = arr[i];
 }
  }
 printf("maximum element = %d", maximum);
 minimum = arr[0];
 for(i = 1; i < 5; i++) {
        if(arr[i] < minimum) {
            minimum = arr[i];
        }
    }
printf("minimum element = %d", minimum);
return 0;
}


