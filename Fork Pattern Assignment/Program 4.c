#include<stdio.h>

int main()
{
    int i=0,j=0,iNo1=0,iNo2=0;
    char ch = 'A';

    printf("Enter The Rows And Columns =>");
    scanf("%d%d",&iNo1,&iNo2);

    for(i=0;i<iNo1;i++)
    {
        for(j=0;j<iNo2,j<=i;j++)
        {
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }

    return 0;
}
