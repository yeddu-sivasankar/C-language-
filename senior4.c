#include <stdio.h>

int main() {
    int temp;
    printf("enter the temp : \n");
    scanf("%d",&temp);
    int summer;
    printf("enter 1 for summer and 0 for not_summer");
    scanf("%d",&summer);
    if(summer==1)
    {
        if(temp>=60 && temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(summer>=60 && summer<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}