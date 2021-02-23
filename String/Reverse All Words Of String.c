#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50]="";

    printf("\n\tEnter The String : ");
    scanf("%[^\n]",&str);

    RevStr(str);

    printf("\n\tString After Reversing The All Words : %s\n\t",str);

    getch();
    return 0;
}
void RevStr(char *str)
{
    char *ptr1=NULL;
    char *ptr2=NULL;
    char ch='\0';

    while(*str!='\0')
    {
        if(*str==' ')
        {
            str++;
            continue;
        }
        ptr1=str;
        while(*str!=' ' && *str!='\0')
        {
            str++;
        }
        ptr2=str-1;
        while(ptr2>ptr1)
        {
            ch=*ptr1;
            *ptr1=*ptr2;
            *ptr2=ch;
            ptr1++;
            ptr2--;
        }
    }
}
