#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50]="";

    printf("\n\tEnter The String : ");
    scanf("%[^\n]",&str);

    RevStr(str);

    printf("\n\tString After Reversing The Last Word : %s\n\t",str);

    getch();
    return 0;
}
void RevStr(char *str)
{
    char *ptr1=NULL;
    char *ptr2=NULL;
    char ch='\0';
    char *ptr3=NULL;
    ptr3=str;

    while(*str!='\0')
    {
        str++;
    }
    ptr2=str-1;
    ptr1=str-1;
    while(*ptr1!=' ' && ptr1!=ptr3)
    {
        ptr1--;
    }
    if(*ptr1==' ')
    {
        ptr1=ptr1+1;
    }
    else
    {
        ptr1=ptr1;
    }
    while(ptr2>ptr1)
    {
        ch=*ptr1;
        *ptr1=*ptr2;
        *ptr2=ch;
        ptr1++;
        ptr2--;
    }
}
