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
    int i=0;
    struct product Arr[3];

    for(i=0;i<3;i++)
    {
        printf("\nEnter ID =");
        scanf("%d",&Arr[i].id);
        printf("\nEnter Name =");
        scanf("%s",&Arr[i].p_name);
        printf("\nEnter Selling Price =");
        scanf("%f",&Arr[i].s_price);
        printf("\nEnter Purchase Price =");
        scanf("%f",&Arr[i].p_price);
    }
    system("cls");
    for(i=0;i<3;i++)
    {
        printf("\n\n ID = %d\n Name = %s\n Selling Price = %0.2f\n Purchase Price = %0.2f\n",Arr[i].id,Arr[i].p_name,Arr[i].s_price,Arr[i].p_price);
    }

    getch();
    return 0;
}
