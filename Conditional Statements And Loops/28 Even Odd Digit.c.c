#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,temp=0,dig=0,sum=0,ecnt=0,ocnt=0,ncnt=0;
    printf("\n Enter The Number\n");
    scanf("%d",&iNo);
    temp=iNo;

    while(temp>0)
    {
        temp=temp/10;
        dig++;
    }
    temp=iNo;
    while(temp>0)
    {
        sum=temp%10;
        if(sum==0)
        {
            ncnt++;
        }
        else if(sum%2==0)
        {
            ecnt++;
        }
        else if(sum%2!=0)
        {
            ocnt++;
        }
        temp=temp/10;
    }
    printf("\nThe Given Value %d Have\n %d Even Numbers\n %d Odd Numbers\n %d Neutral Numbers",iNo,ecnt,ocnt,ncnt);
        getch();
        return 0;
}
