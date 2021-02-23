#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,div=2;
    printf("\n Enter The Number");
    scanf("%d",&iNo);

    {
    while(iNo>div)
    {
        if(iNo%div==0)
        {
            break;
        }
        div++;
    }
    }
    if(iNo==div)
    {
        printf("\n Given Number Is Prime");
    }
    else
    {
        printf("\n Given Number Is Not Prime");
    }
    getch();
    return 0;
}
