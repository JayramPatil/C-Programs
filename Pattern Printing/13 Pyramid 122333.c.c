#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0,k=0;
    printf("Enter The Number\n");
    scanf("%d",&iNo);
    k=-iNo/2+1;

    for(i=1;i<=iNo;i++)
    {
        for(j=1;j<=iNo;j++)
        {
            if(i==iNo || i==j && iNo/2+1<=i ||i>=j && i+j>=iNo+1)
            {
                printf(" %d ",k);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        k++;
    }
    getch();
    return 0;
}
