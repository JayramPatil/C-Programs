#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,no3=0;
    printf("\n\tEnter Three Numbers:\n\t");
    scanf("%d%d%d",&no1,&no2,&no3);

    if(no1==no2 && no2==no3)
    {
          printf("\n\tGiven Numbers Are Equal");
    }
    else if(no1>no2 && no1>no3)
    {
            printf("\n\t%d Is Greater",no1);

    }
    else
    {
        if(no2>no3 && no2>no1)
        {
            printf("\n\t%d Is Greater",no2);
        }
        else
        {
            printf("\n\t%d Is Greater",no3);
        }
    }
    getch();
    return 0;
}

