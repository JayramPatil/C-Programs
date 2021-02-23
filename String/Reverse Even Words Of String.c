#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50]="";

    printf("\n\tEnter The String : ");
    scanf("%[^\n]",&str);

    RevStr(str);

    printf("\n\tString After Reversing The Second Word : %s\n\t",str);

    getch();
    return 0;
}
void RevStr(char *str)
{
    char *ptr1=NULL;
    char *ptr2=NULL;
    char ch='\0';
    int cnt=0;
    int i=0;
    while(*str != '\0')
    {
        if(*str==' ' && *str=='\t')
        {
            str++;
            continue;
        }
        ptr1=str;
        while(*str!=' ' && *str!='\0')
        {
            str++;
            i++;
        }
        ptr2=str-1;
        if(*(str-1)!=' ' && *str!='\t')
        {
            cnt++;
        }
        if((cnt%2)!=0)
        {
            i=0;
        }
        else
        {
            i=i/2;
            while((i)>0)
            {
                ch=*ptr1;
                *ptr1=*ptr2;
                *ptr2=ch;
                i--;
                ptr1++;
                ptr2--;
            }
        }
        str++;
    }
    printf("\n\tWord Count Is %d .",cnt);
}
