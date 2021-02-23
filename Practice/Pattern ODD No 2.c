#include<stdio.h>

int main()
{
    int iNo=0,iNo2=0,iNo3=1,num=0,iDig=1,Temp=0;

    printf("Enter The Number => \n");
    scanf("%d",&iNo);

    while(iNo2<iNo)
    {
        num=(iDig<10)?(num*10)+iDig:(num*100)+iDig;

        iDig+=2;

        iNo3=(iNo2==0)?iNo3:(iNo2<4)?(iNo3*10):(iNo3*100);

        iNo2++;

    }

    while(iNo2>0)
    {
        printf(" %d \n",num);

        Temp = (Temp>=9)? num/(iNo3/100) : (iNo3<=1000)? num/iNo3 : num/(iNo3/10);

        num = (Temp<=9)? (iNo3<=1000)? num%iNo3 : num%(iNo3/10) : num%(iNo3/100);

        num = (Temp<=9)? (num*10)+Temp : (num*100)+Temp;

        iNo2--;
    }
    return 0;
}
