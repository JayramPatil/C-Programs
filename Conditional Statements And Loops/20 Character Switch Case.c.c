#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter The Character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'a':
                 printf("\n Welcome");
                 break;
        case 'B':
        case 'b':
                 printf("\n Good Bye");
                 break;
        case 'C':
        case 'c':
                 printf("\n Have A Nice Day");
                 break;
        case 'D':
        case 'd':
                 printf("\n Good Day");
                 break;
        default:
                 printf("\n Invalid Character");
                 break;
        }
        getch();
        return 0;
}
