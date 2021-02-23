#include<stdio.h>

int Power(int iNo, int Pow)
{
    if(Pow == 1)
    {
        return iNo;
    }
    return (iNo * Power(iNo,--Pow));
}

int main()
{
    int iNo = 0,Pow = 0;

    printf("\nEnter The Number And Power => ");
    scanf("%d%d",&iNo,&Pow);

    printf("=> %d",Power(iNo,Pow));

    return 0;
}
