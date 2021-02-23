#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,i=0,j=0;

    printf("Enter The Number ");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            if(i+j<=(No+No)/2 || i<j)
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


    getch();
    return 0;
}
