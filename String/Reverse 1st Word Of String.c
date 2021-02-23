#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20]="";
    int iNo=0;

    printf("\n\tEnter The String : ");
    scanf("%[^\n]",&str);

    RevStr(str);

    printf("\n\tString After Reversing The First Word : %s\n\t",str);

    getch();
    return 0;
}
void RevStr(char *str)
{
    char *ptr=NULL;
    char *ptr2=NULL;
    char ch='\0';
    int i=0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            str++;
            continue;
        }
        ptr=str;
        while(*str != ' ' && *str != '\0')
        {
            str++;
            i++;
        }
        ptr2=str-1;
        while((i/2)>1)
        {
            ch=*ptr;
            *ptr=*ptr2;
            *ptr2=ch;
            ptr2--;
            ptr++;
            i--;
        }
        str++;
    }
}
