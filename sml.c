#include <stdio.h>

int main() {
    int a,b,c;
   printf("enter the value in a : \n");
    scanf("%d",&a);
     printf("enter the value in b : \n");
    scanf("%d",&b);
    printf("enter the value in c : \n");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("large : %d\n",a);
        if(b>c)
        {
            printf("mid : %d\n",b);
            printf("small : %d\n",c);
        }
        else
        {
         printf("mid : %d\n",c);
            printf("small : %d\n",b);   
        }
    }
    else if(b>c&&b>a)
    {
        printf("large : %d \n",b);
        if(a>c)
        {
          printf("mid : %d\n",a);
            printf("small : %d\n",c);  
        }
        else
        {
        printf("mid : %d\n",c);
            printf("small : %d\n",a);
        }
    }
    else
    {
        printf("large : %d \n",c);
        if(a>b)
        {
          printf("mid : %d\n",a);
            printf("small : %d\n",b);
        }
        else
        {
          printf("mid : %d\n",b);
            printf("small : %d\n",a);
        }
    }
    return 0;
}