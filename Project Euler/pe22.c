#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *ptr;
    ptr = fopen("0022_names.txt","r");
    char nameList[5500][20], ch;
    int t = 0, j;
    while (ch!=EOF)
    {
        ch = fgetc(ptr);
        ch = fgetc(ptr);
        for (j = 0; ch != '"'; j++)
        {
            nameList[t][j] = ch;
            ch = fgetc(ptr);
        }
        nameList[t][j] = '\0';
        ch = fgetc(ptr);
        t++;
    }

    int min, a, b;
    char temp[20];
    for (int i = 0; i < t-1; i++)
    {
        for (int k = 0; k < t-1; k++)
        {
            a = strlen(nameList[i]), b = strlen(nameList[k]);
            if (b<a)
            {
                min = b;
            }
            else
            {
                min = a;
            }
            for (int m = 0; m < min; m++)
            {
                if (nameList[k+1][m]<nameList[k][m])
                {
                    strcpy(temp,nameList[k]);
                    strcpy(nameList[k],nameList[k+1]);
                    strcpy(nameList[k+1],temp);
                    break;
                }
                else if (nameList[k+1][m]==nameList[k][m])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            
        }
        
    }
    /*for (int i = 0; i < t; i++)
    {
        printf("%s\n",nameList[i]);
    }*/
    int sum = 0, tempSum;
    for (int i = 0; i < t; i++)
    {
        tempSum = 0;
        for (int m = 0; m < strlen(nameList[i]); m++)
        {
            tempSum += nameList[i][m] - 'A'+1;
        }
        sum += tempSum*(i+1);
    }
    printf("Total: %d\n",sum);
}