
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0;
    char ch='A';

    printf("\n===========================================================================\n\n");
    printf("\tEnter A Number = ");
    scanf("%d",&iNo);
    printf("\n===========================================================================\n\n");

    for(i=1;i<=iNo;i++)
    {
        printf("\t");
        ch='A';
        for(j=1;j<=iNo;j++)
        {
            if(j==1 || i==j && i+j<=iNo+1 || i+j==iNo+1 && i>=j)
            {
                printf(" %c ",ch);
            }
            else
            {
                printf("   ");
            }
            ch++;
        }
        printf("\n");
    }
    printf("\n===========================================================================\n\n");
    getch();
    return 0;
}
