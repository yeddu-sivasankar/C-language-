#include <stdio.h>

int main() {
    char ch;
    printf("enter the character \n");
    scanf("%c",&ch);
    int res=(ch>='A')&&(ch<='Z');
    printf("%c is a uppercase alphabet i.e is : %d",ch,res);
    return 0;
}