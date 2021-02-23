#include<stdio.h>
#include<conio.h>
int main()
{
	int iNo=0,i=2;
	
	printf("Enter A Number : ");
	scanf("%d",&iNo);
	up:
	if(i<iNo/2)
	{
		if(iNo%i==0)
		{
			goto dw;
		}
		i++;
		goto up;
	}
	dw:
	printf("Given Number Is %s",(iNo/2==i)?"PRIME":"NOT PRIME");
	
	getch();
	return 0;
}
