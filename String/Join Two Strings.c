#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20]="\0";
    char str2[20]="\0";

    printf("\n\tEnter The First String : ");
    scanf("%[^\n]s",&str);
    printf("\n\tEnter The Second String : ");
    scanf(" %s",&str2);

    strcatJ(str,str2);
    printf("\n\tString After Joining  %s.\n\n",str);

    getch();
    return 0;
}
void strcatJ(char *str,char *str2)
{
    while(*str!='\0')
    {
        str++;
    }
    while(*str2 != '\0')
    {
        *str=*str2;
        str++;
        str2++;
    }
    *str='\0';
}
