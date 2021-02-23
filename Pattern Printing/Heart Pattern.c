#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0;

    printf("\n\n");
    for(i=1;i<=5;i++)
    {
        printf("\t");
        for(j=1;j<=5;j++)
        {
            if(j==1 && i==1 || i==1 && j==5 ||i==1&&j==3 || i-j>=3 || i+j>=9 )
            {
                printf("   ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
