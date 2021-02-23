#include<stdio.h>

int main()
{
    int Arr[7]={0},i=0;

    AcceptValues(Arr,i);

    while(i<7)
    {
        printf("%d\n",Arr[i]);
        i++;
    }
    return 0;
}
void AcceptValues(int Arr[],int i)
{
    if(i<7)
    {
        printf("\nEnter A Value => ");
        scanf("%d",&Arr[i]);
        i++;
        AcceptValues(Arr,i);
    }
}
