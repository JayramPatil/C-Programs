#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char up;

    up:

    printf("\n\t==================================\n");

    printf("\n\t*********Enter Number:********\n\t\t\t");
    scanf("%d",&a);
    printf("\n\t **** Given Number Is : %s ****",(a%2==0)?"EVEN":"ODD");

    printf("\n\t==================================\n\n\tPress * to retry");
    up=getch();

    if(up=='*')
    {
        system("cls");
        goto up;
    }

    return 0;
}
