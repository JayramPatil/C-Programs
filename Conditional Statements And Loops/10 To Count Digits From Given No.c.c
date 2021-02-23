#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,temp=0,dig=0;
    printf("\n Enter The Number");
    scanf("%d",&iNo);
    temp=iNo;

    while(temp>0)
    {
        temp=temp/10;
        dig++;
    }
    printf("\n%d Has %d Digits",iNo,dig);
    getch();
    return 0;
}
