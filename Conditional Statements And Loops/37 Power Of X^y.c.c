#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,iNo2=0,iNo3=0;

    printf("\n===========================================================================\n\n");
    printf("\tEnter A Number And Power And Power Of Both Numbers = ");
    scanf("%d%d%d",&iNo1,&iNo2,&iNo3);
    printf("\n===========================================================================\n\n");


    printf("\n\tPower Of ((%d)^%d)^%d = %d \n",iNo1,iNo2,iNo3,Power(Power(iNo1,iNo2),iNo3));


    printf("\n\n===========================================================================\n\n");

    getch();
    return 0;
}
int Power(int i1,int i2)
{
    int pow=1;
    for(;i2>0;i2--)
    {
        pow*=i1;
    }
    return pow;
}
