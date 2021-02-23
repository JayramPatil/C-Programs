#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,iNo2=0;

    printf("\n===========================================================================\n\n");
    printf("\tEnter A Number And Power = ");
    scanf("%d%d",&iNo1,&iNo2);

    printf("\nPower Of (%d)^%d = %d ",iNo1,iNo2,Power(iNo1,iNo2));

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
