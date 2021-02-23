#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,iNo1,fact=1;
    printf("\n Enter The Number = \n\t");
    scanf("%d",&iNo);
    iNo1=iNo;
    if(iNo<=0)
    {
        printf("\n Invalid Number");
    }

    for(iNo;iNo>1;iNo--)
    {
        fact=iNo*fact;
    }
    printf("\n The Factorial Of %d is = %d",iNo1,fact);
    getch();
    return 0;

}
