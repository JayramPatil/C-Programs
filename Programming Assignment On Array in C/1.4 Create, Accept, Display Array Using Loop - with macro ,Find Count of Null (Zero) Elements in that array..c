#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, null = 0;
    
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
    
    while(i<max)
    {
        if(Arr[i] == 0)
        {
            null++;
        }
        i++;
    }

    printf("\nCount Of Null Elements Is %d",null); 
    
    return 0;
}
