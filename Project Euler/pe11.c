#include<stdio.h>
#include<stdlib.h>
void main()
{
    freopen("input11.txt","r",stdin);
    int n = 20;
    int grid[n][n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d",&grid[i][j]);
        }
        
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }*/
    int prod, max = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n-3; j++)
        {
            prod = 1;
            for (int k = j; k < j+4; k++)
            {
                prod *= grid[i][k];
            }
            if (prod>max)
            {
                max = prod;
            }
            //printf("%d\n",max);     
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-3; i++)
        {
            prod = 1;
            for (int k = i; k < i+4; k++)
            {
                prod *= grid[k][j];
            }
            if (prod>max)
            {
                max = prod;
            }
            
        }
        
    }
    for (int i = 0; i < n-3; i++)
    {
        for (int j = 0; j < n-3; j++)
        {
            prod = 1;
            for (int k = 0; k < 4; k++)
            {
                prod *= grid[i+k][j+k];
            }
            if (prod>max)
            {
                max = prod;
            }
            
        }
        
    }
    for (int i = 0; i < n-3; i++)
    {
        for (int j = n-1; j > 2; j--)
        {
            prod = 1;
            for (int k = 0; k < 4; k++)
            {
                prod *= grid[i+k][j-k];
            }
            if (prod>max)
            {
                max = prod;
            }
            
        }
        
    }
    printf("%d\n",max);
}