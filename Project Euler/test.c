#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    for(int i = 2; i<= sqrt(n); i++){
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
void main()
{
    if (isprime(0))
    {
        printf("2 is prime!\n");
    }
    
}