#include<stdio.h>
#include<conio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter The Number of %dth Row And %dth Column of 1st Matrix\n",i,j);
            scanf("%d",&x[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter The Number of %dth Row And %dth Column of 2nd Matrix\n",i,j);
            scanf("%d",&y[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]*y[i][j];
            printf("%5d",z[i][j]);
        }
        printf("|\n");
    }

    getch();
    return 0;
}
