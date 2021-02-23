#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0;
    printf("\n******************************************\n");
    printf("\n\t Enter A Number :");
    scanf("%d",&iNo);
    printf("\n******************************************\n");
    printf("\nNumber Before Call By Address Function = %d\n",iNo);
    printf("\n******************************************\n");
    fun(&iNo);
    printf("\nNumber After Call By Address Function = %d\n",iNo);
    getch();
    return 0;
}
void  fun(int *iPtr)
{
    iPtr++;
}
