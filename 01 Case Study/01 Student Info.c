#include<stdio.h>
#include<conio.h>
struct Student
{
    int  S_Roll_No;
    char  S_Nm;
    int  No_of_Sub;
    int  *Marks;
    int  Total_Marks;
    float  Avg;
};
int main()
{
    Display();

    getch();
    return 0;
}
int update()
{
    int i=0,j=0,k=0,iNo=0;

    printf("Enter The Number Of Students = ");
    scanf("%d",&iNo);

    struct Student obj;

  //  for(j=1;j<=iNo;j++)
  //  {
        for(i=1;i<=iNo;i++)
        {
            printf("Enter A Roll Number = ");
            scanf("%d",&obj.S_Roll_No);
            printf("Enter A Name = ");
            scanf("%s",&obj.S_Nm);
            printf("Enter The Number Of Subjects= ");
            scanf("%d",&obj.No_of_Sub);
           // printf("%d\n",marks(obj.No_of_Sub));
            j=marks(obj.No_of_Sub);
            printf("%d",Average(j,obj.No_of_Sub));
            Display(obj.S_Roll_No,obj.No_of_Sub,obj.S_Nm,j,Average());
        }
 //   }
 return obj.S_Roll_No,obj.S_Nm,obj.No_of_Sub,j,k;
}
int Display(int i,int j,char ch[15],int k,int l)
{

    int iNo2=0;
    printf("\n1] Add New Sudents Information");
    printf("\n2] Display All Students Information");
    printf("\n3] Search Student By Roll Number");
    printf("\n4] Search Student By Name");
    printf("\n Enter Your Choice =  ");
    scanf("%d",&iNo2);

    switch(iNo2)
    {
        case 1:
               update();
               break;
        case 2:
               printf("\n All Students Information ");
               printf("\n| Roll No | Name | Subjects | Total | Average | \n");
               printf("  %d     %s      %d    %d     %f",i,ch,j,k,l);
               break;
        case 3:
                printf("Enter Roll Number ");
                break;
        case 4:
               printf("Enter Name ");
               break;
    }
}
int Average(int mk,int nk)
{
    int d=0;
    float ch=0;

    d=nk*100;
    ch=((mk/d)*100);

    return ch;
}
int Total(int n1)
{

}
int marks(int i1)
{
    int i=0,k=0,j=0;

    for(i=1;i<=i1;i++)
    {
        printf("Enter The Marks Of Subject %d = ",i);
        scanf("%d",&k);
        j+=k;
    }
    return j;
}
