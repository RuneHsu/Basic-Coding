
#include <iostream>

using namespace std;

void SetMatrix(int **matrix, int x, int y, int start, int n)
{
    int i, j;
    if (n <= 0)
        return;
    if (n == 1)
    {
        matrix[x][y] = start;
        return;
    }
    for (i = x; i < x+n-1; i++)         // upper
        matrix[y][i] =start++;
    for (j = y; j < y+n-1; j++)         // right line
        matrix[j][x+n-1] = start++;
    for (i = x+n-1; i > x; i--)         // bottom line
        matrix[y+n-1][i] = start++;
    for (j = y+n-1; j > y; j--)         //  left line
        matrix[j][x] = start++;
    SetMatrix(matrix, x+1, y+ 1, start, n-2);   // recursive
}

int main()
{
    int i, j;
    int n;
    int **matrix;       // matrix two-d
    scanf("%d", &n);
    matrix = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        matrix[i] = (int*)malloc(n * sizeof(int));
    
    SetMatrix(matrix, 0, 0, 1, n);
    
    // print the matrix
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%4d", matrix[i][j]);
        printf("\n");
    }
}

