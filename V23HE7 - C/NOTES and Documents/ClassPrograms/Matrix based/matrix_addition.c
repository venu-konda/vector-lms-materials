#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[][4], int mat2[][4], int result[][4], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[2][4], mat2[2][4], result[2][4];
  
    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Add the matrices
    addMatrices(mat1, mat2, result,2,4);
    
    // Display the result
    printf("The sum of the matrices is:\n");
    displayMatrix(result, 2, 4);
    
    return 0;
}

