#include <stdio.h>
#define max 7

int main()
{
    int Arr[max] = {0}, i = 0, val = 0, cnt = 0;
    
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
    
    printf("\nEnter A Value To Know Its Count => ");
    scanf("%d",&val);
    
    while(i<max)
    {
        if(Arr[i] == val)
        {
            cnt++;
        }
        i++;
    }

    printf("Count Is %d",cnt); 
    

    return 0;
}
