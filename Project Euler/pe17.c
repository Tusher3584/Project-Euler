#include<stdio.h>
#include<stdlib.h>
void main()
{
    freopen("input17.txt","r",stdin);
    int numofletter[1001];
    while (1)
    {
        int n, i;
        scanf("%d%d",&i,&n);
        numofletter[i] = n;
        if (i==0)
        {
            break;
        }
        
    }
    int totallettercount = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (i>20 && i<100)
        {
            if (i%10!=0)
            {
                numofletter[i] = numofletter[i%10]+numofletter[i-(i%10)];
            }
        }
        else if (i>=100)
        {
            if (i%100!=0)
            {
                numofletter[i] = numofletter[i%100]+numofletter[i-(i%100)]+3;
            }
        }
        
    }
    for (int i = 1; i <= 1000; i++)
    {
        totallettercount += numofletter[i];
    }
    printf("%d\n",totallettercount);
}