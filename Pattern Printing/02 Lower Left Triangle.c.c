#include<stdio.h>
#include<conio.h>
int main()
{
    int row=0,col=0,iNo=0;
    printf("\n==================================\n");
    printf("\n\tEnter A Number = ");
    scanf("%d",&iNo);

    printf("\n==================================\n\n");
    for(row=1;row<=iNo;row++)
    {
        printf("\t");
        for(col=1;col<=row;col++)  //with if else
        {                           //    for(col=1;col<=5;col++)
            printf(" * ");          //    if(col<=row)
                                    //   {
                                    //        printf(" * ");
                                    //    }
                                    //    else
                                    //    {
                                    //        printf("   ");
                                    //    }
        }
        printf("\n");
    }
    printf("\n==================================\n");
    getch();
    return 0;
}
