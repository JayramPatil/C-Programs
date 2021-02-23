#include<stdio.h>
#include<conio.h>
int main()
{
    int row=0,col=0;
    char ch='A';

    for(row=1;row<=5;row++)
    {
        ch='A';
        for(col=1;col<=row;col++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
