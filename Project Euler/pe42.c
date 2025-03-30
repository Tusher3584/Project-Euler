#include<stdio.h>
#include<stdlib.h>
int search(int n, int a[], int l)
{
    for (int i = 0; i < l; i++)
    {
        if (a[i]==n)
        {
            return 1;
        }
        
    }
    return 0;
}
void main()
{
    FILE *ptr;
    ptr = fopen("0042_words.txt","r");
    int triangularNumber[100], wordValue, flag = 0, a, length;
    char ch;
    for (int i = 0; i<100; i++)
    {
        triangularNumber[i] = ((i+1)*(i+2))/2;
        length = i+1;
    }
    
    while (ch!=EOF)
    {
        wordValue = 0;
        ch = fgetc(ptr);
        ch = fgetc(ptr);
        while (ch!='"')
        {
            wordValue += ch - 'A' + 1;
            ch = fgetc(ptr);
        }
        a = search(wordValue, triangularNumber, length);
        if (a==1)
        {
            flag++;
        }
        
        ch = fgetc(ptr);
    }
    printf("Result: %d\n",flag);
}