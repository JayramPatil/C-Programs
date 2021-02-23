#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=0,c=0,d=0;
    printf("Enter The Range To Print Fibonacci Series\n");
    scanf("%d",&d);
    printf("\n fibonacci series:");

    while(d>0)
    {
        printf("\n%d",c);
        c=a+b;
        a=b;
        b=c;
        d--;
    }
    getch();
    return 0;

}



