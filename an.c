#include<stdio.h>
int main()
{
    char n;
    printf("enters the string", n);
    scanf("%s",&n);
    if(n<=65&&n<=90||n>=97&&n>=122)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
