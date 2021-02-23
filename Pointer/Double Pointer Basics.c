#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=21;
    int *p=&iNo;
    int **q=&p;
    int ***r=&q;
    int ****x=&r;
    int ******m=&x;
    int *******n=&m;

    printf("\n%d\n",iNo);
    printf("\n%d\n",&iNo);
    printf("\n%d\n",&p);
    printf("\n%d\n",*p);
    printf("\n%d\n",&(*x));
    printf("\n%d\n",**m);
    printf("\n%d\n",&(**n));
    printf("\n%d\n",****n);
    printf("\n%d\n",&(***n));


    getch();
    return 0;
}
