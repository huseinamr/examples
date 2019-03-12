/*
Hint: run like this: "./a.out < input.txt"

Assumptions:
- N > 0
*/

#include <stdio.h>
#include <stdlib.h>

void counting_sort(int *A, int *sortedA, int N, int K) {
	/*
	A: Array to be sorted
	sortedA: Sorted array
	N: Number of elements in A
	K: Maximum value of elements in A
	*/ 
	int temp[K+1];
	int i, j, idx;

	// Initialize the elements of temp with 0
	for (i = 0; i <= K; i++) {
		temp[i] = 0;
	}

	// Count the frequencies of each distinct element of A
	for (i = 0; i < N; i++) {
		temp[A[i]]++;
	}

	// Put the sorted elements in sortedA
	idx = 0;
	for (i = 0; i <= K; i++) {
		for (j = 0; j < temp[i]; j++) {
			sortedA[idx] = i;
			idx++;
		}
	}
}

int max_array(int *A, int N) {
	// Returns the maximum value in the array A
	int i, max;

	max = A[0];
	for (i = 1; i < N; i++) {
		if (max < A[i]) {
			max = A[i];
		}
	}

	return max;
}

int main() {
	int *A, *sortedA;
	int i, N, K;

	// Read the input
	scanf("%d", &N);
	A = (int *)malloc(N * sizeof(int));
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	// Find K, the maximum value in A
	K = max_array(A, N);

	// Sort the array A
	sortedA = (int *)malloc(N * sizeof(int));
	counting_sort(A, sortedA, N, K);

	// Print the result
	for (i = 0; i < N; i++) {
		printf("%d ", sortedA[i]);
	}
	printf("\n");

	// Release memory
	free(A);
	free(sortedA);

	return 0;
}