#include<stdio.h>
void main()
{
    int mod = 1000000, product, power, number;
    int result[11] = {0};
    for (int i = 1; i < 1000; i++)
    {
        if (i%10==0)
        {
            continue;
        }
        product = 1;
        //power = i;
        // number = i;
        for (int j = 1; j <= i; j++)
        {
            product *= i;
            product = product%mod;
        }
        
        /*while (power>0)
        {
            if (power%2==1)
            {
                product *= number;
                product = product%mod;
            }
            power /= 2;
            number = (number%mod)*(number%mod);
        }*/
        //printf("Self power of %d : %d\n",i,product);
        for (int j = 10; j > 0; j--)
        {
            result[j] += product%10;
            if (result[j]>=10)
            {
                result[j-1] += result[j]/10;
                result[j] = result[j]%10;
            }

            product /= 10;
        }
        printf("Self power summation for %d: ",i);
        for (int k = 1; k < 11; k++)
        {
            printf("%d ",result[k]);
        }
        printf("\n");
    }
    for (int k = 1; k < 11; k++)
    {
        printf("%d ",result[k]);
    }

}
