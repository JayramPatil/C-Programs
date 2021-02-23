#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    printf("\n\t==================================\n");
    printf("\n\t*********Enter The Number:********\n\t\t\t");
    scanf("%d",&no);

    printf("\t***** Given Number %d Is %s *****",no,(no%2==0)?"Even":"Odd");

    printf("\n\t==================================\n");
    getch();
    return 0;
}
