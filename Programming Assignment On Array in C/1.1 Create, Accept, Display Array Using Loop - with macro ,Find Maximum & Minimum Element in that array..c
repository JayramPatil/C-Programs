#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, Max = 0, Min = 0;
    
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
    
    Max = Min = Arr[i++];
    
    while(i<max)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
        i++;
    }

    printf("\nMaximum Value Is %d\nMinimum Value Is %d",Max,Min); 
    

    return 0;
}
