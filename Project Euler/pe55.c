#include<stdio.h>
long long int reverse(long long int n)
{
    long long int x = 0;
    while(n){
        x = 10*x + n%10;
        n = n/10;
    }
    return x;
}
int isPalindrome(long long int n)
{
    if (n==reverse(n)) {
        return 1;
    }
    else{
        return 0;
    }
}
void main()
{
    long long int n;
    int sum = 0, flag;
    for (int i = 10; i < 10000; i++) {
        n = i;
        flag = 0;
        for (int j = 0; j < 49; j++) {
            n = n + reverse(n);
            if (isPalindrome(n)) {
                flag = 1;
                break;
            }
        }
        if (flag==0) {
            sum++;
        }
    }
    printf("%d\n",sum);
}
