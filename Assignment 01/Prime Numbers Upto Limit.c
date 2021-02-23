#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,iNo2=0,div=0;

    printf("\n Prime Numbers Upto ");
    scanf("%d",&iNo);
    printf("1\n");
    for(;iNo2<=iNo;iNo2++)
    {
        for(div=2;iNo2>=div;div++)
        {
            if(iNo2%div==0)
            {
                if(iNo2==div)
                {
                    printf("%d\n",iNo2);
                    break;
                }
                 if(iNo2>div)
                {
                    break;
                }
            }
        }
    }
    getch();
    return 0;
}
