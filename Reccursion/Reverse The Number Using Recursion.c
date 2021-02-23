#include<stdio.h>
int ReverseNumber(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }
    printf("%d",iNo%10);

    return ReverseNumber(iNo/10);
}

int main()
{
    int iNo = 0;

    printf("\nEnter The Number => ");
    scanf("%d",&iNo);

    ReverseNumber(iNo);

    return 0;
}
