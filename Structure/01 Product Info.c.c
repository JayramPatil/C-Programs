#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct product
{
    int id;
    char p_name[10];
    float s_price;
    float p_price;
};
int main()
{
    struct product obj;
    //obj.id=10;
    //obj.p_name[10]="jayram";
    //obj.s_price=15;
    //obj.p_price=20;

    printf("\nEnter ID =");
    scanf("%d",&obj.id);
    printf("\nEnter Name =");
    scanf("%s",&obj.p_name);
    printf("\nEnter Selling Price =");
    scanf("%f",&obj.s_price);
    printf("\nEnter Purchase Price =");
    scanf("%f",&obj.p_price);
    system("cls");

    printf(" ID = %d\n Name = %s\n Selling Price = %0.2f\n Purchase Price = %0.2f\n",obj.id,obj.p_name,obj.s_price,obj.p_price);
    getch();
    return 0;
}
