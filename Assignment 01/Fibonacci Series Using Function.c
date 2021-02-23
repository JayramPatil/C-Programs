#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,i=1;

    printf("Fibonacci Series Upto 10 Numbers\n");

    while(i<=10)
    {
        printf("%d\n",iNo1);
        iNo1=fun(i);
        i++;
    }

    getch();
    return 0;
}
int fun(i)
{
    int iNo1=1,iNo2=0,Temp=0,Cnt=0;

    for(;Cnt<i;Cnt++)
    {
        Temp=iNo1+iNo2;
        iNo1=iNo2;
        iNo2=Temp;
    }
    return Temp;
}
