//complete
#include<stdio.h>
int d(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            sum += i;
        }
        
    }
    return sum;
}
void main()
{
    int amicable_sum = 0;
    for (int i = 1; i < 10000; i++)
    {
        /* code */
        if (i==d(d(i)) && i!=d(i))
        {
            /* code */
            //printf("%d\n",i);
            amicable_sum += i;
        }
        
    }
    printf("%d\n",amicable_sum);
}