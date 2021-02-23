#include<stdio.h>
#include<conio.h>
int main()
{
        int No1,No2,Temp;
        No1=No2=Temp=0;

        printf("\n\t=============================\n");
        printf("\n\tEnter Two Numbers =>  ");
        scanf("%d%d",&No1,&No2);

        printf("\n\t=============================\n");
        printf("\n\tNumbers Before Swapping= %d %d\n",No1,No2);

         Temp=No1;
         No1=No2;
         No2=Temp;

        printf("\n\tNumbers After Swapping = %d %d\n",No1,No2);
        printf("\n\t=============================");
        getch();
        return 0;
}
