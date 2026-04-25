#include <stdio.h>
#include<string.h>
int value(char ch)
{
    if(ch=='i')
    {
        return 1;
    }
    else if(ch=='v')
    {
        return 5;
    }
    else if(ch=='x')
    {
        return 10;
    }
    else if(ch=='l')
    {
        return 50;
    }
    return 0;
}
void main()
 {
     char str[10];
     printf("enter the string : \n");
     scanf("%s",str);
     int sum=0;
     for(int i=0;i<=strlen(str)-1;i++)
     {
         int num1=value(str[i]);
         int num2=value(str[i+1]);
         if(i==strlen(str)-1)
         {
             sum=sum+num1;
         }
         else if(num1<num2)
         {
             sum=sum+(num2-num1);
             i++;
         }
         else if(num1>=num2)
         {
             sum=sum+num1;
         }
     }
     printf("%d",sum);
 }