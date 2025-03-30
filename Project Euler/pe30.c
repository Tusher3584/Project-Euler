#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int i, temp, sum, result = 0;
    for ( i = 10; i < 999999; i++)
    {
        temp = i;
        sum = 0;
        while (temp>0)
        {
            sum += pow(temp%10,5);
            temp /= 10;
        }
        if (i==sum)
        {
            result += i;
        }
        
    }
    printf("Result: %d\n",result);
}