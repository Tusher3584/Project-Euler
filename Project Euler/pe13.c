#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp = fopen("input13.txt","r");
    int grid[100][50];
    char c;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            fscanf(fp,"%c",&c);
            grid[i][j] = c - '0';
        }
        fscanf(fp,"%c",&c);
    }
    /*for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            printf("%d",grid[i][j]);
        }
        printf("\n");
    }*/
    int sum[200], add, k=0;
    sum[0] = 0;
    for (int j = 49; j >= 0; j--)
    {
        add = 0;
        for (int i = 0; i < 100; i++)
        {
            add += grid[i][j];
        }
        add += sum[k];
        sum[k] = add%10;
        sum[k+1] = add/10;
        k++;
    }
    for (int i = k; i > k-10; i--)
    {
        printf("%d",sum[i]);
    }
    printf("\n");
}