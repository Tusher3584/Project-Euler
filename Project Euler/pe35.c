#include<stdio.h>
#include<math.h>
void main()
{
    int circularPrime[1000];
    //circularPrime[0] = 2, circularPrime[1] = 3, circularPrime[2] = 5, circularPrime[3] = 7;
    circularPrime[0] = 2;
    int index = 1, temp, tempLength;
    for (int i = 3; i < 1000000; i=i+2)
    {
        if (i<10)
        {
            if (isPrime(i))
            {
                circularPrime[index++] = i;
            }
            
        }
        else
        {
            temp = i;
            int tempArray[6];
            tempLength = 0;
            while (temp)
            {
                tempArray[tempLength++] = temp%10;
                temp /= 10;
            }
            for (int j = 0; j < tempLength; j++)
            {
                
            }
            
        }
        
    }
    
}