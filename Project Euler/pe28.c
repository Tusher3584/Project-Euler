#include<stdio.h>
#include<stdlib.h>
void main()
{
    int dimension = 1001;
    int array[1001][1001] = {0};
    int key = dimension*dimension;
    int i = 0, j = dimension-1;
    while (key>0)
    {
        while (dimension>i && i>-1 && dimension>j && j>-1 && array[i][j]==0)
        {
            array[i][j] = key;
            key = key-1;
            j--;
        }
        j++;
        i++;
        while (dimension>i && i>-1 && dimension>j && j>-1 && array[i][j]==0)
        {
            array[i][j] = key;
            key = key-1;
            i++;
        }
        i--;
        j++;
        while (dimension>i && i>-1 && dimension>j && j>-1 && array[i][j]==0)
        {
            array[i][j] = key;
            key = key-1;
            j++;
        }
        j--;
        i--;
        while (dimension>i && i>-1 && dimension>j && j>-1 && array[i][j]==0)
        {
            array[i][j] = key;
            key = key-1;
            i--;
        }
        i++;
        j--;
    }
    int sum = 0;
    for (int p = 0, q = dimension-1; p < dimension; p++,  q--)
    {
        sum += array[p][p] + array[p][q];
    }
    sum -= array[dimension/2][dimension/2];
    printf("Sum of diagonal: %d\n",sum);
}
