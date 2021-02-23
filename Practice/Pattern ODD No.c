#include<stdio.h>
#include<malloc.h>
int main()
{
    int iNo=0,i=0,j=0,k=1,*p=NULL;

    printf("Enter Number Of Rows & Columns => \n");
    scanf("%d",&iNo);

    p=(int*)malloc((iNo)*sizeof(int));

    while(i<iNo)
    {
        if(k%2!=0)
        {
            p[i]=k;
            i++;
        }
        k++;
    }
    k=0;
    for(i=0;i<iNo;i++)
    {
        k=i-1;
        for(j=0;j<iNo;j++)
        {
            printf(" %d ",p[k=((k<iNo-1)?++k:0)]);
        }
        printf("\n");
    }
    return 0;
}
