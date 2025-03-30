#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int a[1000] = {0}, b[1000] = {0};
    a[999] = 1;
    b[999] = 1;
    int index = 2, currentDigit = 999;
    while (currentDigit>0) {
        int c[1000] = {0};
        for (int i = 999; i >= currentDigit; i--) {
            c[i] += a[i] + b[i];
            if (c[i]>=10) {
                if (i==currentDigit) {
                    currentDigit--;
                }
                c[i-1] = c[i]/10;
                c[i] = c[i]%10;
            }
        }
        memcpy(a,b,sizeof(a));
        memcpy(b,c,sizeof(a));
        index++;
    }
    printf("\nNumber of index: %d\n",index);
}
