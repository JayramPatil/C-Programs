#include<stdio.h>
#include<conio.h>
int main()
{
    int no1;
    no1=0;
    printf("\n\t==================================\n");
    printf("\n\t*********Enter The Number:********\n\t\t\t");
    scanf("%d",&no1);
    if(no1%2==0)
    {
        printf("\n\t***** Given Number %d is Even *****",no1);
    }
    else
    {
        printf("\n\t***** Given Number %d is Odd *****",no1);
    }
    printf("\n\t==================================\n");
    getch();
    return 0;
}
