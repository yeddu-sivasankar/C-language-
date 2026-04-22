#include <stdio.h>

int main() {
     int cigars;
     printf("enter the number of cigars : \n ");
     scanf("%d",&cigars);
     int(weekend);
     printf("enter 1 for weekend and 0 for weekend");
     scanf("%d",&weekend);
     if(weekend)
     {
         if(cigars>=40)
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
         if(cigars>=40&&cigars<=60)
         {
             printf("true");
         }
         else
         {
             printf("fasle");
         }
     }
}