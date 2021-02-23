#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,temp=5;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=temp)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        temp=temp-1;
        printf("\n");
    }
    getch();
    return 0;
}
