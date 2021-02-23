#include<stdio.h>

int Sum(int iNo)
{
    int Total = 0;

    if(iNo == 0)
    {
        return Total;
    }
    printf("\nEnter The Number => ");
    scanf("%d",&Total);

    Total += Sum(--iNo);

    return Total;
}
int main()
{
    int iNo = 0;

    printf("Enter How Many Numbers Do You Want To Calculate => ");
    scanf("%d",&iNo);

    printf("\nSum Of %d Numbers Is %d",iNo,Sum(iNo));

    return 0;
}

