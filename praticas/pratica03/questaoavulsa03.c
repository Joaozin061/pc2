

#include <stdio.h>

#define N 3  // Number of variables

void gaussJordanElimination(float mat[N][N+1]) {
    // Applying Gauss-Jordan Elimination
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(j != i) {
                float ratio = mat[j][i] / mat[i][i];
                for(int k = 0; k <= N; k++) {
                    mat[j][k] -= ratio * mat[i][k];
                }
            }
        }
    }

    // Scaling the matrix to make diagonal elements 1
    for(int i = 0; i < N; i++) {
        float divisor = mat[i][i];
        for(int j = 0; j <= N; j++) {
            mat[i][j] /= divisor;
        }
    }
}

void displaySolution(float mat[N][N+1]) {
    printf("Solution:\n");
    for(int i = 0; i < N; i++) {
        printf("x%d = %.2f\n", i+1, mat[i][N]);
    }
}

int main() {
    float mat[N][N+1];

    printf("Enter the coefficients of the linear equations:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= N; j++) {
            printf("Enter coefficient for equation %d, term %d: ", i+1, j+1);
            scanf("%f", &mat[i][j]);
        }
    }

    gaussJordanElimination(mat);

    displaySolution(mat);

    return 0;
}
