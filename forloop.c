#include <stdio.h>
int main() {
    int n;
    printf("enter the total number of peoples \n");
    scanf("%d",&n);
    int sum=0;
    for (int i=(n-1); i>=1; i--)
    {
        sum=sum+i;
    }
       printf("total handshakes are : %d \n",sum);
}