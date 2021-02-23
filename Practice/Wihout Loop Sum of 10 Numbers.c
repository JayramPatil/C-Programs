#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,cnt=0,Sum=0;

    Up:
    if(cnt<10)
    {
        printf("\n\t Enter %d Number : ",cnt+1);
        scanf("%d",&No);
        Sum+=No;
        cnt++;
        goto Up;
    }
    printf("\n\t The Sum Of 10 Numbers Is %d",Sum);
    getch();
    return 0;
}
