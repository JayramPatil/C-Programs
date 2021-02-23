#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20]="\0";
    char dst[20]="ABC";

    printf("\n\tEnter The String To Copy : ");
    scanf("%[^\n]",&str);

    printf("\n\tValue In B Before Copy %s .\n\n",dst);
    strcpyJ(str,dst);
    printf("\n\tValue In B After Copy %s .\n\n",dst);

    getch();
    return 0;
}
void strcpyJ(char *str,char *dst)
{
    while(*str != '\0')
    {
        *dst=*str;
        str++;
        dst++;
    }
    *dst='\0';
}

