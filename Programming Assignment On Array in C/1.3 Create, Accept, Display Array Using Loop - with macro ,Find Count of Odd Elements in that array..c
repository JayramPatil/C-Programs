#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, Odd = 0;
    
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
        if(Arr[i]%2 != 0)
        {
            Odd++;
        }
        i++;
    }

    printf("\nCount Of Odd Numbers Is %d",Odd); 
    

    return 0;
}
