#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter The Character =\n");
    ch=getchar();
    if(ch>='A' && ch<='Z')
    {
        printf("\nGiven Character Is Uppercase");
    }
    else
    {
        printf("\ngiven Character Is Lowercase");
    }
    getch();
    return 0;
}
