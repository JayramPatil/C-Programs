#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20]="\0";
    int Len=0;

    printf("\n\tEnter The String : ");
    scanf("%[^\n]",&str);

    Len=strlenJ(str);

    printf("\n\tLength Of String %s Is %d .\n\n",str,Len);

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
