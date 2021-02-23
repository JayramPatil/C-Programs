#include<stdio.h>
#include<conio.h>
int main()
{
    int start=0,end=0,temp=0,cnt=1;
    printf("\n\t\t Enter The Range To Get Table\n\t\t");
    scanf("%d%d",&start,&end);
    temp=start;
    if(temp>end)
    {
        printf("Invalid Range");
    }
    else
    {
    printf("\n=======================================================================================\n\n");
        while(cnt<=10)
        {
            temp=start;
            while(temp<=end)
            {
                printf("\t%d",temp*cnt);
                temp++;
            }
            printf("\n");
            cnt++;
        }
    printf("\n=======================================================================================\n");
    }
    getch();
    return 0;

}
