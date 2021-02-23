#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50]="";
    int iNo=0;

    printf("\n\tEnter The String To Count Its Words : ");
    scanf("%[^\n]",&str);

    iNo=Wordcnt(str);

    printf("\n\tWords In String : %d",iNo);

    getch();
    return 0;
}
int Wordcnt(char *str)
{
    int Cnt=0;
    while(*str!='\0')
    {
        if(*str==' ' && *str=='\t')
        {
            str++;
            continue;
        }
        while(*str!=' ' && *str!='\0')
        {
            str++;
        }
        if(*(str-1)!=' ' && *(str-1)!='\t')
        {
            Cnt++;
        }
        str++;
    }
    return Cnt;
}
