#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,iNo=0;

    printf("Enter The Number =>");
    scanf("%d",&iNo);

    for(i=1;i<=iNo;i++)
    {
        for(j=1;j<=iNo;j++)
        {
            if(j==1 || i==1 && j!=iNo|| j==iNo && i+j!=iNo+iNo && i+j!=iNo+1 || i==iNo && i+j!=iNo+iNo)
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
