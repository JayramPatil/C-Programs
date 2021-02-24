#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, sum = 0;
    
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
        sum += Arr[i];
        i++;
    }

    printf("\nSum Of All Elements Is %d",sum); 
    
    return 0;
}
