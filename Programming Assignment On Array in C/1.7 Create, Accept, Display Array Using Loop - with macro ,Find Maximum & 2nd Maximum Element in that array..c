#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, Max1 = 0, Max2 = 0;
    
    while(i<max)
    {
        printf("Enter The Value => ");
        scanf("%d",&Arr[i]);
        i++;
    }
    i=0;
    
    while(i<max)
    {
        printf("\n => %d",Arr[i]);
        i++;
    }
    i=0;
    Max1 = Max2 = Arr[0];
    while(i<max)
    {
        if(Arr[i] > Max1)
        {
            Max2 = Max1;
            Max1 = Arr[i];
        }
        i++;
    }

    printf("\nMaximum Number Is %d\nSecond Maximum Is %d",Max1,Max2); 
    
    return 0;
}
