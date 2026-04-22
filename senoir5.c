#include <stdio.h>
int main() {
    int you,date;
    printf("enter the stylishness of you and date \n");
    scanf("%d%d",&you,&date);
    if (you<=2||date<=2)
    {
        printf("no=0");
    }
    else if (you>=8||date>=8)
    {
        printf("yes=2");
    }
    else
    {
        printf("maybe=1");
    }
}