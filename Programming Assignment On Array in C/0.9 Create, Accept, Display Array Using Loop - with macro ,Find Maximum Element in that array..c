#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, val = 0;
    
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
    
    val = Arr[i++];
    
    while(i<max)
    {
        if(Arr[i] > val)
        {
            val = Arr[i];
        }
        i++;
    }

    printf("\nMaximum Value Is %d",val); 
    

    return 0;
}
