#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,div=2;
    printf("\n Enter The Number");
    scanf("%d",&iNo);

    while(iNo>div)
    {
        if(iNo%div==0)
        {
            break;
        }
        div++;
    }
    printf("Given Number %d Is = %s",iNo,(iNo==div)?"Prime":"Not Prime");
    getch();
    return 0;
}
