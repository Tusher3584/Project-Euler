//complete
#include<stdio.h>
void main()
{
    int sum, flag = 0;
    for (int i = 0; i <= 2; i++)
    {
        /* code */
        for (int j = 0; j <= 4; j++)
        {
            /* code */
            for (int k = 0; k <= 10; k++)
            {
                /* code */
                for (int m = 0; m <= 20; m++)
                {
                    /* code */
                    for (int n = 0; n <= 40; n++)
                    {
                        /* code */
                        for (int o = 0; o <= 100; o++)
                        {
                            /* code */
                            for (int p = 0; p <= 200; p++)
                            {
                                /* code */
                                sum = i*100 + j*50 + k*20 + m*10 + n*5 + o*2 + p*1;
                                if (sum == 200)
                                {
                                    /* code */
                                    flag += 1;
                                    //printf("%dx100 + %dx50 + %dx20 + %dx10 + %dx5 + %dx2 + %dx1 = 200\n",i,j,k,m,n,o,p);
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    printf("%d\n",flag+1);
}