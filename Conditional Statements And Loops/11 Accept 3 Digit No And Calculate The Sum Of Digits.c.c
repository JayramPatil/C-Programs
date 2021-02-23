#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,temp=0,dig=0,sum=0;
    printf("\n Enter The Number");
    scanf("%d",&iNo);
    temp=iNo;

    while(temp>0)
    {
        temp=temp/10;
        dig++;
    }
    if(dig<3 || dig>3)
    {
        printf("\nInvalid Number");
    }
    else
    {
        temp=iNo;
        while(temp>0)
        {
            sum+=temp%10;
            temp=temp/10;
        }
        printf("\n The Sum Of The Digits Of The Number %d is = %d",iNo,sum);
    }
    printf("\n Thanks");
    getch();
    return 0;

}
