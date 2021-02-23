#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,max=0,dig=0,temp=0;

    printf("Enter The Number");
    scanf("%d",&iNo);
    temp=iNo;

    while(temp>0)
    {
        dig=temp%10;
        if(max<dig)
        {
            max=dig;
        }
        temp=temp/10;
    }
    printf("maximum digit is %d",max);
    getch();
    return 0;
}
