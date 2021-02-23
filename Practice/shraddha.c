#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0;
    Up:
    printf("Enter A Number : ");
    scanf("%d",&iNo);

    if(iNo<=1)
    {
        printf("Invalid Number !");
        goto Up;
    }
    printf("Given Number Is %s",(iNo%2==0)?"EVEN":"Negative");

    getch();
    return 0;

}
