#include<stdio.h>

int DisplayFibonacci(int iNo)
{
    int static i = 0;
    if(i < iNo)
    {
        printf("%d\n",BuildFibonacci(i++));
    }
    return DisplayFibonacci(iNo);
}

int BuildFibonacci(int iNo)
{
    if(iNo == 0 || iNo == 1)
    {
        return iNo;
    }
    return (BuildFibonacci(iNo-1) + BuildFibonacci(iNo-2));
}

int main()
{
    int iNo = 0;

    printf("\nEnter The Number => ");
    scanf("%d",&iNo);

    DisplayFibonacci(iNo);

    return 0;
}

/// ANOTHER METHOD TO SOLVE
/*int DisplayFibonacci(int iNo)
{
    int static i = 0;
    int static old = 1;

    if(i < iNo)
    {
        int New = BuildFibonacci(i);
        old += New;
        printf("%d\n%d\n",New,old);
        i+=2;
    }

    return DisplayFibonacci(iNo);
}
*/

