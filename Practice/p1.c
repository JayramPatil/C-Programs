#include<stdio.h>
#include<conio.h>
int main()
{
    int Day=0,Month=0,Year=0;

    printf("Enter The Days : ");
    scanf("%d",&Day);

    Year=Day/365;
    Month=(Day % 365)/30;
    Day=Day-((Year*365)+(Month*30));

    printf("Year  = %d\n",Year);
    printf("Month = %d\n",Month);
    printf("Day   = %d\n",Day);
}
