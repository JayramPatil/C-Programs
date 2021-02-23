#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,sum=0,cnt=1;
    printf("\n============================\n");

    while(cnt<11)
    {
        printf("\n Enter The Number =  ");
        scanf("%d",&iNo1);
        sum = sum + iNo1;
        cnt++;
    }
    printf("\n============================\n");
    printf("\nThe Addition Of Inputed Numbers Is = %d",sum);
    getch();
    return 0;

}



