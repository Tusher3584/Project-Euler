#include<stdio.h>
#include<stdlib.h>
void main()
{
    int k = 0;
    int limit =1000000;
    int a, b, c, d, e, f, g, h, i, j;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            if (b==a)
            {
                continue;
            }
            
            for (c = 0; c < 10; c++)
            {
                if (c==b || c==a)
                {
                    /* code */
                    continue;
                }
                
                for (d = 0; d < 10; d++)
                {
                    if (d==c || d==b || d==a)
                    {
                        /* code */
                        continue;
                    }
                    
                    for (e = 0; e < 10; e++)
                    {
                        if (e==d || e==c || e==b || e==a)
                        {
                            /* code */
                            continue;
                        }
                        
                        for (f = 0; f < 10; f++)
                        {
                            if (f==e || f==d || f==c || f==b || f==a)
                            {
                                /* code */
                                continue;
                            }
                            
                            for (g = 0; g < 10; g++)
                            {
                                if (g==f || g==e || g==d || g==c || g==b || g==a)
                                {
                                    /* code */
                                    continue;
                                }
                                
                                for (h = 0; h < 10; h++)
                                {
                                    if (h==g || h==f || h==e || h==d || h==c || h==b || h==a)
                                    {
                                        /* code */
                                        continue;
                                    }
                                    
                                    for (i = 0; i < 10; i++)
                                    {
                                        if (i==h || i==g || i==f || i==e || i==d || i==c || i==b || i==a)
                                        {
                                            /* code */
                                            continue;                
                                        }
                                        
                                        for (j = 0; j < 10; j++)
                                        {
                                            if (j==i || j==h || j==g || j==f || j==e || j==d || j==c || j==b || j==a)
                                            {
                                                /* code */
                                                continue;
                                            }
                                            k++;
                                            if (k==limit)
                                            {
                                                /* code */
                                                break;
                                            }
                                        }
                                        if (k==limit)
                                        {
                                            /* code */
                                            break;
                                        }
                                    }
                                    if (k==limit)
                                    {
                                        /* code */
                                        break;
                                    }
                                }
                                if (k==limit)
                                {
                                    /* code */
                                    break;
                                }
                            }
                            if (k==limit)
                            {
                                /* code */
                                break;
                            }
                        }
                        if (k==limit)
                        {
                            /* code */
                            break;
                        }
                    }
                    if (k==limit)
                    {
                        /* code */
                        break;
                    }
                }
                if (k==limit)
                {
                    /* code */
                    break;
                }
            }
            if (k==limit)
            {
                /* code */
                break;
            }
        }
        if (k==limit)
        {
            /* code */
            break;
        }
    }
    printf("%d%d%d%d%d%d%d%d%d%d",a,b,c,d,e,f,g,h,i,j);
}