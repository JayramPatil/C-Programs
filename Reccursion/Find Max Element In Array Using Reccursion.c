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

    return Find_Max_Ele(Arr,--i);
}
int Find_Max_Ele(int Arr[],int i)
{
    int Max = 0;
    if(i == 0)
    {
        return i;
    }
    Max = Find_Max_Ele(Arr,i-1);

    return (Arr[i] > Arr[Max])? i : Max;
}

int main()
{
    int Arr[Size];

    printf("\nMaximum Element Is => %d",Arr[AcceptElement(Arr)]);

    return 0;
}

