#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter The Character =\n");
    ch=getch();
    if(ch>='A' && ch<='Z')
    {
        printf("Given Character Is Uppercase");
    }
    else
    {
        printf("given Character Is Lowercase");
    }
    getch();
    return 0;
}
