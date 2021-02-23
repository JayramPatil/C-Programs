#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5, b=1,c=0;
    printf("\n\t\t\t***** Table From 5 To 10 *****");
    printf("\n=======================================================================================\n\n");
    while(b<=10)
    {
        c=a;
        while(c<=10)
        {
            printf("\t%d",c*b);
            c++;
        }
        printf("\n");
        b++;
    }
    printf("\n=======================================================================================\n");
    getch();
    return 0;

}
