#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    int prod = 1;
    if (n>1)
    {
        while (n>1)
        {
            prod *= n--;
        }
        return prod;
    }
    return prod;
}
void main()
{
    int sum, temp, result = 0;
    for (int i = 10; i < 9999999; i++)
    {
        temp = i;
        sum = 0;
        while (temp>0)
        {
            sum += factorial(temp%10);
            temp /= 10;
        }
        if (i==sum)
        {
            result += i;
        }
        
    }
    printf("Result: %d\n",result);
}