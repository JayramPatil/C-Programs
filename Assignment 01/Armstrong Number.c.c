#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,dig=0,mult=0,sum=0,Temp=0;

    printf("\n================================================\n");

    printf("\n\tEnter A Number = ");
    scanf("%d",&iNo);

    printf("\n================================================\n");

    Temp=iNo;
        while(Temp>0)
        {
           dig=Temp%10;
           sum+=dig*dig*dig;
           Temp=Temp/10;
        }
        printf("\n\tGiven Number %d is %s\n",iNo,(sum==iNo)?"Armstrong":"Not Armstrong");

        printf("\n================================================\n");
    getch();
    return 0;
}
