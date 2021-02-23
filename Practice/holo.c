#include<stdio.h>
#include<conio.h>
int main()
{
	int iNo=0,i=0,j=0;
	
	printf("Enter A Number : ");
	scanf("%d",&iNo);
	
	for(i=1;i<=iNo;i++)
	{
		for(j=1;j<=iNo;j++)
		{
			if(i==1 || j==1 || i==iNo || j==iNo)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}
