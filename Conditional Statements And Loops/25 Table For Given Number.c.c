#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0, i=1;
    printf("\n Enter The Number = \n\t");
    scanf("%d",&iNo);
    if(iNo<=0)
    {
        printf("\n Invalid Number");
    }
    else
        while(i<=10)
        {
            printf("\n\t%d",iNo*i);
            i++;
        }
        getch();
        return 0;

}
