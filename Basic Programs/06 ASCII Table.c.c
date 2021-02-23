#include<stdio.h>
#include<conio.h>
int main()
{
     int ascii;
     for(ascii=0;ascii<=127;ascii++)
     {
        printf("The ASCII Character Of %d is = %c\n",ascii,ascii);
     }
     getch();
     return 0;
}
