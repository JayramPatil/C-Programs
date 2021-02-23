#include<stdio.h>

int main()
{
    int Arr[7]={0},i=0;

    while(i<7)
    {
        printf("\nEnter A Value => ");
        scanf("%d",&Arr[i]);
        i++;
    }

    i=0;

    while(i<7)
    {
        printf("%d\n",Arr[i]);
        i++;
    }
    return 0;
}


