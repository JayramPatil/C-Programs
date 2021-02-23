#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0;
    printf("\n==================================\n\n");

    printf("\tEnter The Number = ");
    scanf("%d",&iNo);

    printf("\n==================================\n\n");

    for(i=1;i<=iNo;i++)
    {
        printf("\t");

        for(j=1;j<=iNo;j++)
        {
            if(i==1 || i==iNo || i+j==iNo+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n==================================\n\n");

    getch();
    return 0;
}
