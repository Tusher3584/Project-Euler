#include<stdio.h>
#include<math.h>
int isAbundant(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if(n%i==0){
            sum += i;
        }
    }
    if(sum>n){
        return 1;
    }
    else{
        return 0;
    }
}
int isIt(int n)
{
    for (int i = 1; i <= n/2; i++) {
        if (isAbundant(i) && isAbundant(n-i)) {
            return 0;
        }
    }
    return 1;
}
void main()
{
    long long int sum = 0;
    for(int i =  1; i<28124; i++){
        if(isIt(i)){
            sum += i;
        }
    }
    printf("\n%lli\n", sum);
}
