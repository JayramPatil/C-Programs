#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0;
    iNo=45;
    int *iJay=NULL;
    iJay=&iNo;

    printf("\n%d\n",iNo);
    printf("\n%d\n",&iNo);
    printf("\n%d\n",iJay);
    printf("\n%d\n",&iJay);
    printf("\n%d\n",*iJay);
    printf("\n%d\n",&(*iJay));

    getch();
    return 0;
}
