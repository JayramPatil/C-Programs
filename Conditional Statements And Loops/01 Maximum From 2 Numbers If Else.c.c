#include<stdio.h>
#include<conio.h>
int main()
{
    int no1,no2;
    no1=no2=0;
    printf("\n\t==================================\n");
    printf("\n\t*********Enter Two Numbers:********\n\t\t\t");
    scanf("%d%d",&no1,&no2);
    if(no1>no2)
    {
        printf("\n\t***** Given Number %d is Maximum *****",no1);
    }
    else
    {
        printf("\n\t***** Number %d is Maximum *****",no2);
    }
    printf("\n\t==================================\n");
    getch();
    return 0;
}
