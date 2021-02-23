#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,temp=0,dig=0,max=0,num=0;
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
            num=temp%10;
            if(max<num)
            {
                max=num;
            }
            temp=temp/10;
        }
        printf("\n The Maximum Digit Of %d is = %d",iNo,max);
    }
    printf("\n Thanks");
    getch();
    return 0;
}
