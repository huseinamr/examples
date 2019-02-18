/*
ATTENTION: Compile using -lm flag

Reference: http://tech-algorithm.com/articles/nearest-neighbor-image-scaling/
*/

#include <math.h>
#include <stdio.h>

/*
Print each element of the matrix,
with each column separated by a space,
and each row separated by a newline.
*/
void printMatrix(int height, int width, int matrix[height][width]) {
	int i, j;

	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

/*
Fill each element in new_matrix with its nearest neighbor from matrix.
*/
void resizeMatrix(int height, int width, int new_height, int new_width,
				  int matrix[height][width],
				  int new_matrix[new_height][new_width]) {
	int i, j, x, y;

	double x_ratio = (double)width / (double)new_width;
	double y_ratio = (double)height / (double)new_height;

	for (i = 0; i < new_height; i++) {
		for (j = 0; j < new_width; j++) {
			// x and y are the nearest neighbors of i and j
			x = floor(j * x_ratio);
			y = floor(i * y_ratio);
			new_matrix[i][j] = matrix[y][x];
		}
	}
}

int main() {
	int matrix[2][2] = {
		{1, 0},
		{0, 1}
	};

	int new_matrix[4][4];

	resizeMatrix(2, 2, 4, 4, matrix, new_matrix);

	printMatrix(4, 4, new_matrix);

	return 0;
}