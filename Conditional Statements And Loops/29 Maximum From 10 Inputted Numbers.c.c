#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0,max=0,min=0,cnt=1;
    while(cnt<11)
    {
        printf("\n Enter The Number =");
        scanf("%d",&iNo);
        if(max<iNo || cnt==1)
        {
            max=iNo;
        }
        if(min>iNo || cnt==1)
        {
            min=iNo;
        }
        cnt++;
    }
    printf("\nThe Maximum Number Is %d And Minimum Number Is %d",max,min);
}
