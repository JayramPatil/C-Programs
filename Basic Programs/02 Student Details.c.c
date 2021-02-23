#include<stdio.h>
#include<conio.h>
int main()
{
 int No=0;
 char Stu[10];
 char Co[10];
 char Ci[10];

 printf("\n==============================================================\n");
 printf("\tEnter The Student Name =");
 scanf("%s",&Stu);
 printf("\tEnter The Roll No =");
 scanf("%d",&No);
 printf("\tEnter The Course =");
 scanf("%s",&Co);
 printf("\tEnter The City =");
 scanf("%s",&Ci);
 system("cls");

 printf("\n==============================================================\n");
 printf("\tStudent Name = %s\n\tRoll No      = %d\n\tCourse       = %s\n\tCity         = %s",Stu,No,Co,Ci);
 getch();
 return 0;
}
