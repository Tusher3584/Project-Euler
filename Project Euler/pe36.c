#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isBinaryPalindrome(int n)
{
    int index = 0;
    char binary1[50];
    while (n>0)
    {
        binary1[index++] = '0'+(n%2);
        n /= 2;
    }
    binary1[index] = '\0';
    char binary2[50];
    for (int i = 0; i < index; i++)
    {
        binary2[i] = binary1[index-1-i];
    }
    binary2[index] = '\0';
    if (!strcmp(binary1,binary2))
    {
        return 1;
    }
    return 0;
}
void main()
{
    int temp, index, test, result = 0;
    for (int i = 1; i < 1000000; i=i+2)
    {
        char decimal1[10];
        temp = i, index = 0;
        while (temp>0)
        {
            decimal1[index++] = '0'+(temp%10);
            temp /= 10;
        }
        decimal1[index] = '\0';
        char decimal2[10];
        for (int j = 0; j < index; j++)
        {
            decimal2[j] = decimal1[index-1-j];
        }
        decimal2[index] = '\0';
        if (!strcmp(decimal1,decimal2))
        {
            test = isBinaryPalindrome(i);
            if (test)
            {
                result += i;
            }
            
        }
        
    }
    printf("Result: %d\n",result);
}