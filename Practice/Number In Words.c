#include<stdio.h>
#include<conio.h>

    static int iNo=0,temp=0;

int main()
{
    int dig=0;
    Up:
    printf("==========================\n\n");
    printf("Enter A Number ");
    scanf("%d",&iNo);
    printf("\n==========================\n\n\t");

    if(iNo<=0)
    {
        printf("\n Invalid Number !\n\n");
        printf("Enter Any Key To Continue.......");
        getch();
        system("cls");
        goto Up;
    }

    temp=iNo;
    while(temp>0)
    {
        temp/=10;
        dig++;
    }
    if(dig<0 || dig>2)
    {
        printf("Invalid Number\n\n");
        return -1;
    }

    temp=iNo;
    Num(temp);

    printf("\n\n==========================\n\n");
    getch();
    return 0;

}
int Num(int a)
{
    switch(a)
    {
        case 0:
            printf( "Zero");
            break;

        case 1:
            printf(" One");
            break;

        case 2:
            printf(" Two");
            break;

        case 3:
            printf(" Three");
            break;

        case 4:
            printf(" Four");
            break;

        case 5:
            printf(" Five");
            break;

        case 6:
            printf(" Six");
            break;

        case 7:
            printf(" Seven");
            break;

        case 8:
            printf(" Eight");
            break;

        case 9:
            printf(" Nine");
            break;

        case 10:
            printf(" Ten");
            break;

        case 11:
            printf(" Elevan");
            break;

        case 12:
            printf(" Twelve");
            break;

        case 13:
            printf(" Thirteen");
            break;

        case 14:
            printf(" Fourteen");
            break;

        case 15:
            printf(" Fifteen");
            break;

        case 16:
            printf(" Sixteen");
            break;

        case 17:
            printf(" Seventeen");
            break;

        case 18:
            printf(" Eighteen");
            break;

        case 19:
            printf(" Nineteen");
            break;

        default :
            //a=temp/10;
            fun(a);
    }
}
int fun(int b)
{

        b=b/10;
     switch(b)
    {
        case 2:
            printf(" Twenty");
            break;
        case 3:
            printf(" Thirty");
            break;
        case 4:
            printf(" Fourty");
            break;
        case 5:
            printf(" Fifty");
            break;
        case 6:
            printf(" Sixty");
            break;
        case 7:
            printf(" Seventy");
            break;
        case 8:
            printf(" Eigty");
            break;
        case 9:
            printf(" Ninety");
            break;
        default:
            break;
    }
        temp=iNo;
            if(temp%10!=0)
            {
                b=temp%10;
                Num(b);
            }
}
