#include<stdio.h>
#include<math.h>
int sqrdigitchain(int n)
{
    if (n==89)
    {
        return 1;
    }
    else if (n==1)
    {
        return 0;
    }
    int rem, sum = 0;
    while (n)
    {
        rem = n%10;
        sum += rem*rem;
        n = n/10;
    }
    //printf("%d\n",sum);
    sqrdigitchain(sum);
}
void main()
{
    int l = pow(10,7), count = 0;
    for (int i =2; i < l; i++)
    {
        count += sqrdigitchain(i);
        //printf("\n");
    }
    printf("%d\n",count);
}