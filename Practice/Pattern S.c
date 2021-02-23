#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0;

    printf("\n\tEnter A Number : ");
    scanf("%d",&iNo);

    printf("\n========================================\n\n\t");
    for(i=1;i<=iNo;i++)
    {
        for(j=1;j<=iNo;j++)
        {
            if(i==1 || j==1 && i<=(iNo/2)+1 || i==(iNo/2)+1 || j==iNo && i>iNo/2 || i==iNo)
            {
                printf(" S ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n\t");
    }
    printf("\n========================================\n\n\t");
    getch();
    return 0;
}
