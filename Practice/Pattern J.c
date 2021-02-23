#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,no=0;
    printf("\n\t");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || j==3 || i==5 && j<=3 || i==4 && j==1)
            {
                printf(" 0 ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n\t");
    }
    getch();
    return 0;
}
