#include<stdio.h>
#include<conio.h>

int main()
{
	int No1=0,No2;
	
	printf("\n Enter a Two Number to Check Maximum From it => ");
	scanf("%d%d",&No1,&No2);
	
	if(No1>No2)
	   printf("%d is Maximum",No1);
	else
	    printf("%d is Maximum",No2);
		
	
	getch();
	return 0;
}
