#include<stdio.h>
int main()
{
    char c;
    printf("enter a character%c\n",c);
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
       printf("the character is an alphabet%c",c);
        else
            printf("the character is not an alphabet%c",c);
    return 0;
}
