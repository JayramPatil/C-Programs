#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,div=2;
    printf("\n Enter The Number");
    scanf("%d",&iNo);

    for(iNo;iNo>div;div++)
    {
        if(iNo%div==0)
        {
            break;
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
