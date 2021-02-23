#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,iNo2,Ret=-1;

    printf("\n\tEnter Two Numbers => ");
    scanf("%d%d",&iNo1,&iNo2);

    Ret=Anagram(iNo1,iNo2);

    if(Ret==1)
    {
        printf("\n\t Anagram");
    }
    else
    {
        printf("\n\t Not Anagram");
    }

    getch();
    return 0;
}
int Anagram(int no1,int no2)
{
    int len=0;
    int Arr[10]={};

    if(len=printf("%d",no1)!=printf("%d",no2))
    {
        return 0;
    }
    while(len>0)
    {
        Arr[no1%10]++;
        Arr[no2%10]--;
        no1/=10;
        no2/=10;
        len--;
    }
    len=9;
    while(len>=0)
    {
        if(Arr[len]!=0)
        {
            return 0;
        }
        len--;
    }
    return 1;
}




