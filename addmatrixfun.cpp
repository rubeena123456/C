#include <stdio.h>
#define R 3
#define C 2
void add(int a[][C], int b[][C], int sum[][C]);
int main()
{
    int a[R][C], b[R][C], sum[R][C];
    int i, j;
    printf("Enter elements of first matrix \n");
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix \n");
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    add(a, b, sum);
	return 0;
}
void add(int a[][C], int b[][C], int sum[][C])
{
    int i, j;
	printf("Sum of the matrices\n");
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

