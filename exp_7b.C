#include <stdio.h>
int main() {
    int m, n, i, j;
    int A[10][10], B[10][10], Sum[10][10];
  printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        } }
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }  }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }  }
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
