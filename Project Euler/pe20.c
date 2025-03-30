#include<stdio.h>
int main()
{
    int arr[400] = {0}, n, k = 0, sum = 0, flag;
    arr[399] = 1;
    for (int i = 1; i <= 100; i++) {
        n = 399;
        for(int j=0; j<=k; j++){
            arr[n-j] *= i;
        }
        flag = 1;
        while(flag==1){
            for(int j=0; j<=k; j++){
                if (j==k && arr[n-j] >= 10) {
                    k++;
                }
                if (arr[n-j] >= 10) {
                    arr[n-j-1] += arr[n-j]/10;
                    arr[n-j] = arr[n-j]%10;
                }
            }
            for(int j=0; j<=k; j++){
                if(arr[n-j]>=10){
                    flag = 1;
                    break;
                }
                else{
                    flag = 0;
                }
            }
        }
    }
    for (int i = 0; i <= k; i++) {
        sum += arr[n-i];
    }
    printf("%d\n",sum);
    return 0;
}
