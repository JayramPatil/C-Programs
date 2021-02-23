#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10;
    int y=20;

    x=x+y;
    y=x-y;
    x=x-y;

    printf("x = %d y = %d",x,y);
    getch();
    return 0;

}
