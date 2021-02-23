#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,iNo2=0,iSum1=0,iSum2=0,iStart=11,iEnd=2000;

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    while(iStart<=iEnd)
    {
        for(iNo1=1;iNo1<=(iStart/2);iNo1++)
        {
            if(iStart%iNo1==0)
            {
                iSum1+=iNo1;
            }
        }
        for(iNo2=1;iNo2<=(iSum1/2);iNo2++)
        {
            if(iSum1%iNo2==0)
            {
                iSum2+=iNo2;
            }
        }
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
