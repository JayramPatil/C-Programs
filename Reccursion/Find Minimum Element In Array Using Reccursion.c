#include<stdio.h>
#define Size 5

int AcceptElement(int Arr[])
{
    int i = 0;

    while(i < Size)
    {
        printf("\nEnter The Number => ");
        scanf("%d",&Arr[i++]);
    }

    return Find_Min_Ele(Arr,--i);
}
int Find_Min_Ele(int Arr[],int i)
{
    int Min = 0;
    if(i == 0)
    {
        return i;
    }
    Min = Find_Min_Ele(Arr,i-1);

    return (Arr[i] < Arr[Min])? i : Min;
}

int main()
{
    int Arr[Size];

    printf("\nMinimum Element Is => %d",Arr[AcceptElement(Arr)]);

    return 0;
}

