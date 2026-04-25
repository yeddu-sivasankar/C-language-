#include <stdio.h>
void main()
{
    int a=10;
    int b=20;
    b=a++;
    a=a++;
    printf("a=%d\t b=%d",a,b);
}