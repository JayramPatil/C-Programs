#include<stdio.h>
#include<conio.h>

long fact(int);

int main()
{
  int i=0,j=0,iNo=0;

  printf("Enter The Number\n");
  scanf("%d",&iNo);

  for (i = 0; i < iNo; i++)
  {
    for (j = 0; j <= (iNo - i - 2); j++)
    {
      printf(" ");
    }
        for (j = 0 ; j <= i; j++)
        {
          printf("%ld ",fact(i)/(fact(j)*fact(i-j)));
        }

    printf("\n");
  }

  getch();
  return 0;
}

long fact(int n)
{
  int c;
  long result = 1;

  for (c = 1; c <= n; c++)
  {
    result = result*c;
  }

  return result;
}
