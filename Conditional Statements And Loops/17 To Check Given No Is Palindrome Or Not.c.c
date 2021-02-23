#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,dig=0,temp=0,sum=0,rev=0;
    printf("\n Enter A Number = ");
    scanf("%d",&iNo);
    temp=iNo;
    if(temp<=0)
    {
        printf("\n Invalid Number");
        return -1;
    }

        while(temp>0)
        {
            sum=temp%10;
            rev=(rev*10)+sum;
            temp=temp/10;
        }
        printf("Given Number is %s",(rev==iNo)?"Pelindrome":"Not Pelindrome");
    getch();
    return 0;
}
