#include<stdio.h>
#include<conio.h>
int main()
{
    int m=0,n=0,temp=0,sum=0;

        printf("\n==================*************==================\n");
        printf("\n\tEnter The Starting Number = ");
        scanf("%d",&m);
        printf("\n\tEnter The Ending Number = ");
        scanf("%d",&n);
        printf("\n==================*************==================\n");

        if(m>=n)
        {
            printf("\n\t\tInvalid Range.....\n");
        }
        else
        {
            for(temp=m;temp<=n;temp++)
            {
                sum=sum+temp;
            }
                printf("\n\tThe Sum Of Numbers Between %d And %d Is = %d\n",m,n,sum);
        }
        printf("\n==================*************==================");
     getch();
     return 0;
}
