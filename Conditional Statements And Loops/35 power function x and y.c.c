#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,iNo2=0,cnt=0,pow=1;

        printf("\n Enter The Number =");
        scanf("%d",&iNo1);

        printf("\n Enter The Power =");
        scanf("%d",&iNo2);

        cnt=iNo2;

    if(iNo2==0)
    {
            printf("\n The %d th Power Of %d Is = %d",iNo2,iNo1,pow);
    }
    else if(iNo2<0)
    {
        printf("\n\tInvalid Power");
    }
    else
    {
        while(cnt>0)
        {
            pow=pow*iNo1;
            cnt--;
        }
            printf("\n The %d th Power Of %d Is = %d",iNo2,iNo1,pow);
    }
        getch();
        return 0;
}
