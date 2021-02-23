#include<stdio.h>

int main()
{
    int i=0,j=0,iNo1=0,iNo2=0;

    printf("Enter The Number Of Rows And Columns =>");
    scanf("%d%d",&iNo1,&iNo2);

    for(i=0;i<iNo1;i++)
    {
        for(j=0;j<iNo2;j++)
        {
            if(i==0|| i==iNo1-1)
            {
                printf(" %c",65+j);
                continue;
            }
            else if(j==0|| j==iNo2-1)
            {
                printf(" %c",65+i);
                continue;
            }
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
