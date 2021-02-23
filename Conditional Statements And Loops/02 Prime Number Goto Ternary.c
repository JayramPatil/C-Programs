#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,div=2;

    pf:
    printf("\n Enter The Number : ");
    scanf("%d",&iNo);

    if(iNo<2)
    {
        printf("Invalid Number !");
        goto pf;
    }

    up:
    if(iNo>div)
    {
        if(iNo%div==0)
        {
            goto dwn;
        }
        div++;
        goto up;
    }
    dwn:
    printf("Given Number %d Is = %s",iNo,(iNo==div)?"Prime":"Not Prime");
    getch();
    return 0;
}
