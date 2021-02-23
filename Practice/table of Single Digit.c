#include<stdio.h>
#include<conio.h>
int main()
{
    int start=0,i=0;

    printf("Enter The Number =>");
    scanf("%d",&start);

    if(start<0)
    {
        printf("\nInvalid Digit\n");
        return -1;
    }

    for(i=1;i<=10;i++)
    {
     printf("%2d * %2d = %3d\n",start,i,start*i);
    }
    getch();
    return 0;
}
