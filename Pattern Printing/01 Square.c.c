#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0;
    printf("\n==================================\n");
    printf("\n\tEnter The Number = ");
    scanf("%d",&iNo);
    printf("\n\n");
    for(i=1;i<=iNo;i++)
    {
        //printf("\t");
        for(j=1;j<=iNo;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n==================================");
    getch();
    return 0;
}
