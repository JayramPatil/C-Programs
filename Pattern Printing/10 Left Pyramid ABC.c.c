#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0;
    char ch='A';
    printf("Enter The Number\n");
    scanf("%d",&iNo);

    for(i=1;i<=iNo;i++)
    {
        ch='A';
        for(j=1;j<=iNo;j++)
        {
            if(j==1 || i==j && i+j<=iNo+1 || i>=j && i+j<=iNo+1 || i<=iNo/2+1 && i>=j)
            {
                printf(" %c ",ch);
                ch++;
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
