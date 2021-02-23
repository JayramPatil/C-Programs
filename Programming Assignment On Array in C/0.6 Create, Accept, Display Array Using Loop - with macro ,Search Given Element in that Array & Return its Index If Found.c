#include<stdio.h>
#define max 7
int main()
{
    int Arr[max]={0},i=0,val=0;

    while(i<max)
    {
        printf("\nEnter A Value => ");
        scanf("%d",&Arr[i]);
        i++;
    }

    i=0;

    while(i<max)
    {
        printf("%d\n",Arr[i]);
        i++;
    }

    i=0;
    printf("Enter A Value To Get Index Of That Value => ");
    scanf("%d",&val);

    while(i<max)
    {
        if(Arr[i] == val)
        {
            break;
        }
        i++;
    }
    if(i != max)
    {
        printf("Match Found At Index %d",i);
    }
    else
    {
        printf("Match Not Found");
    }
    return 0;
}


