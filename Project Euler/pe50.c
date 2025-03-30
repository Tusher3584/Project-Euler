#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n)
{
    for (int i = 0; i < sqrt(n); i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
void main()
{
    int primes[1000], index = 1, sum = 0;
    primes[0] = 2;
    for (int i = 3; i < 1000000; i=i+2)
    {
        if (isPrime(i))
        {
            primes[index++] = i;
        }
        
    }
    for (int i = 0; i < index; i++)
    {
        sum += primes[i];
    }
    index--;
    while (!isprime(sum))
    {
        sum -= primes[index--];
    }
    printf("Result: %d\n",sum);
    
}