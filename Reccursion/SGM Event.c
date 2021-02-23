#include<stdio.h>
#include<conio.h>
int main()
{
    int Start=1,End=100,Num=0,Temp=0,Num2=0,Sqr=0;

    while(Start<=End)
    {
        Temp=Start;

        Sqr=Temp*Temp;
        Num=0;
        Num2=0;
        while(Temp>0)
        {
            Num=(Num*10)+Sqr%10;
            Sqr=Sqr/10;
            Temp=Temp/10;
        }
        Temp=Start;
        while(Temp>0)
        {
            Num2=(Num2*10)+Temp%10;
            Temp=Temp/10;
        }
        if(Num==Num2)
        {
            printf("%d\n",Start);
        }
        Start++;
    }
    getch();
    return 0;
}
