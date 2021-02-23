#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20]="\0";

    printf("\n\tEnter The String : ");
    scanf("%[^\n]",&str);

    strrev(str);

    printf("\n\tReverse Of String %s .\n\n",str);

    getch();
    return 0;
}
int strlenJ(char *ptr)
{
    int i=0;
    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }
    *ptr='\0';
    return i;
}
void strrev(char *str)
{
    char *dst="\0";
    int len=0;
    len=strlenJ(str);
    dst=str+(len-1);
    char ch='\0';

    while(len/2>1)
    {
        ch=*str;
        *str=*dst;
        *dst=ch;
        str++;
        dst--;
        len--;
    }
}





