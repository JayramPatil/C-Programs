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
    else if(ch>='a' && ch<='z')
    {
        printf("\nGiven Character Is Lowercase");

    }
    else if(ch>='0' && ch<='9')
    {
        printf("\nGiven Input Is Digit");
    }
    else
    {
        printf("\nGiven Input Is Special Symbol");
    }
    getch();
    return 0;
}
