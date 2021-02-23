#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,dig=0,temp=0,sum=0,rev=0;
    printf("\n Enter A Number = ");
    scanf("%d",&iNo);

    temp=iNo;
    while(temp>0)
    {
        temp=temp/10;
        dig++;
    }
    if(dig<4 || dig>4)
    {
        printf("\n Invalid Number");
    }
    else
    {
        temp=iNo;
        while(temp>0)
        {
            sum=temp%10;
            rev=(rev*10)+sum;
            temp=temp/10;
        }
        printf("Reverse Number Of %d Is = %d",iNo,rev);
    }
    getch();
    return 0;
}
