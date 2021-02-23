#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,iNo2=0,iSum1=0,iSum2=0,iStart=11,iEnd=2000;

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    while(iStart<=iEnd)
    {
        iSum1=Sum(iStart);
        iSum2=Sum(iSum1);
        if(iStart==iSum2)
        {
            printf("\n\t%d & %d Are Amicable Pair.\n",iStart,iSum1);
        }
        iSum1=0;
        iSum2=0;
        iStart++;
    }
    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    getch();
    return 0;
}
int Sum(int iStart)
{
    int iNo1=0,iSum1=0;

    for(iNo1=1;iNo1<=(iStart/2);iNo1++)
        {
            if(iStart%iNo1==0)
            {
                iSum1+=iNo1;
            }
        }
        return iSum1;
}
