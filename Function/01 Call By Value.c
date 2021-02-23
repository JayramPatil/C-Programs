#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0;
    printf("\n******************************************\n");
    printf("\n\t Enter A Number :");
    scanf("%d",&iNo);
    printf("\n******************************************\n");
    printf("\nNumber Before Call By Value Function = %d\n",iNo);
    fun(iNo);
    getch();
    return 0;
}
void  fun(int Num)
{
    Num++;
    printf("\n******************************************\n");
    printf("\nNumber After Call By Value Function = %d\n",Num);
    printf("\n******************************************\n");
}
