#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\o';

    printf("\nEnter The Character ");
    ch=getche();
    lu(ch);

    getch();
    return 0;
}
    void lu(char ch)
    {
        if(ch>='A' && ch<='Z')N
        {
            printf("\nGiven Character Is Uppercase\n");
        }
        else if(ch>='a' && ch<='z')
        {
            printf("\nGiven Character Is Lowercase\n");
        }
        else if(ch>='0' && ch<='9')
        {
            printf("\nGiven Character Is Number\n");
        }
        else
        {
            printf("\nGiven Character Is Special Symbol\n");
        }
    }
