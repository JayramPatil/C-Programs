#include<stdio.h>
#include<conio.h>

long fact(int);

int main()
{
  int i=0,j=0,iNo=0,temp=0;

  printf("Enter The Number\n");
  scanf("%d",&iNo);
   temp=iNo-1;
  for (i = 0; i<iNo; i++)
  {
    for (j = 0; j<iNo; j++)
    {
        if (j>=temp)
        {
            if(j>=(iNo-1)/2)
            {
                //if (i<=j)
                //{
                    printf("* ");
                //}
            }
        }
       else
        {
         printf(" ");
        }
    }
    temp=temp-1;
    printf("\n");
  }

  getch();
  return 0;
}

