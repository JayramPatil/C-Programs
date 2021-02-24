#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, Even = 0;
    
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
        if(Arr[i]%2 == 0)
        {
            Even++;
        }
        i++;
    }

    printf("\nCount Of Even Numbers Is %d",Even); 
    

    return 0;
}