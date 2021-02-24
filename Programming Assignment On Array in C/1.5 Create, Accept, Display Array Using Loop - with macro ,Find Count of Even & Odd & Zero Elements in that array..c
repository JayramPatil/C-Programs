#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, null = 0, even = 0, odd = 0;
    
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
            even++;
            if(Arr[i] == 0)
            {
                null++;
            }
        }
        else
        {
            odd++;
        }
        i++;
    }

    printf("\nCount Of Null Elements Is %d\nCount Of Even Numbers Is %d\nCount Of Odd Numbers Is %d",null,even,odd); 
    
    return 0;
}
