#include<stdio.h>
#include<conio.h>
int main()
{
    int iStart=1,iEnd=35,Temp=0,Dig=0,Cnt=0;

     printf("List Of Number From 1 To 35 Which Is Not Divisible By 5&7 Is");

        for(Temp=iStart;Temp<=iEnd;Temp++)
        {
            if(Temp%5!=0 || Temp%7!=0)
            {
                for(Cnt=1;Cnt>0;Cnt--)
                {
                    Dig=Temp%10;
                }
                if(Dig!=7)
                {
                    printf("\n\t%d",Temp);
                }
            }
        }
    getch();
    return 0;
}
