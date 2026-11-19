/* Q113: Find the kth smallest element in an integer array.
   Input: n, n integers, then k (1-based). */
#include <stdio.h>
#include <stdlib.h>

static int compare_ints(const void *left, const void *right)
{
	int a = *(const int *)left;
	int b = *(const int *)right;
	return (a > b) - (a < b);
}

int main(void)
{
	int n, k;

	if (scanf("%d", &n) != 1 || n <= 0) {
		return 1;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL) {
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 1;
		}
	}

	if (scanf("%d", &k) != 1 || k < 1 || k > n) {
		free(arr);
		return 1;
	}

	qsort(arr, (size_t)n, sizeof(*arr), compare_ints);
	printf("%d\n", arr[k - 1]);

	free(arr);
	return 0;
}


